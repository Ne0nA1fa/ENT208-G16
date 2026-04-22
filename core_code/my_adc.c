
 #include "my_adc.h"
 
#define VERSION         12


void  My_ADC_PreInit(ADC_TypeDef* ADCx,u32 trigger,bool enableDMA)
{
    u8 i;
    ADC_InitTypeDef ADC_InitStructure; 

    if(ADCx==ADC1)
    {
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE);
    }
    else if(ADCx==ADC2)
    {
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC2, ENABLE);
    }
    else if(ADCx==ADC3)
    {
        RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE);
    }

    RCC_ADCCLKConfig(RCC_PCLK2_Div6);

    for(i=0;i<ArrayCount(Pins_ADC);i++)
    {
        GPIO_Pin_Init(Pins_ADC[i],GPIO_Mode_AIN);
    }

    ADC_DeInit(ADCx);  

    ADC_InitStructure.ADC_Mode = ADC_Mode_Independent;
    ADC_InitStructure.ADC_ScanConvMode = enableDMA?ENABLE:DISABLE;
    ADC_InitStructure.ADC_ContinuousConvMode = enableDMA?ENABLE:DISABLE;
    ADC_InitStructure.ADC_ExternalTrigConv = trigger;//ADC_ExternalTrigConv_None;
    //**All notes can be deleted and modified**//
    ADC_Init(ADCx, &ADC_InitStructure); 

    if(enableDMA)
    {
        u8 i;
        for(i=0;i<ArrayCount(Pins_ADC);i++)
        {
            ADC_RegularChannelConfig(ADCx, My_ADC_GetADCChannel(ADCx,Pins_ADC[i]), i+1, ADC_SampleTime_239Cycles5 );
        /* Enable ADC1 DMA */
        ADC_DMACmd(ADCx, ENABLE);
    }
    
    ADC_Cmd(ADCx, ENABLE);
    ADC_ResetCalibration(ADCx);
    while(ADC_GetResetCalibrationStatus(ADCx));
    //**All notes can be deleted and modified**//

//    ADC_SoftwareStartConvCmd(ADCx, ENABLE)
}
void  My_ADC_Init(ADC_TypeDef* ADCx)
{
    My_ADC_PreInit(ADCx,ADC_ExternalTrigConv_None,false);
}
#ifdef __MY_DMA_H

void  My_ADC_Init_DMA(ADC_TypeDef* ADCx,u16 *adcValue,u16 adcDataNumber)
{
    My_ADC_PreInit(ADCx,ADC_ExternalTrigConv_None,true);
    My_DMA_Init(DMA1_Channel1,DMA_DIR_PeripheralSRC,(uint32_t)&(ADC1->DR),(uint32_t)adcValue,adcDataNumber,DATA_SIZE_HALFWORD);
}

void My_ADC_StartADC_DMA(ADC_TypeDef* ADCx,u16 adcDataNumber)
{
    DMA_SetCurrDataCounter(DMA1_Channel1,adcDataNumber);
    DMA_Cmd(DMA1_Channel1,ENABLE);
    ADC_SoftwareStartConvCmd(ADCx, ENABLE);
}

bool My_ADC_DMAComplete(ADC_TypeDef* ADCx)
{
    if(DMA_GetFlagStatus(DMA1_FLAG_TC1)!=RESET)
    {
        DMA_ClearFlag(DMA1_FLAG_TC1);//־
        DMA_Cmd(DMA1_Channel1,DISABLE);
        ADC_SoftwareStartConvCmd(ADCx, DISABLE);
        return true;
    }
    return false;
}
#endif
 
u8 My_ADC_GetADCChannel(ADC_TypeDef* ADCx,MyPinDef pin)
{
    if(ADCx==ADC1 || ADCx==ADC2 || ADCx==ADC3)
    {
        if(pin>=PC0 && pin<=PC3)
        {
            return (ADC_Channel_10 + pin - PC0);
        }
        if(pin<=PA3)
        {
            return (ADC_Channel_0 + pin - PA0);
        }
        if(ADCx==ADC3)
        {
            if(pin>=PF6 && pin<=PF10)
            {
                return (ADC_Channel_4 + pin - PF6);
            }
        }
        else
        {
            if(pin>=PA4 && pin<=PA7)
            {
                return (ADC_Channel_4 + pin - PA4);
            }
            if(pin==PC4 || pin==PC5)
            {
                return (ADC_Channel_14 + pin - PC4);
            }
            if(pin==PB0 || pin==PB1)
            {
                return (ADC_Channel_8 + pin - PB0);
            }
        }
    }
    return 0xff;
}

u16 My_ADC_GetValue(ADC_TypeDef* ADCx,u8 ch)
{
    ADC_RegularChannelConfig(ADCx, ch, 1, ADC_SampleTime_239Cycles5 );
    ADC_SoftwareStartConvCmd(ADCx, ENABLE);
    while(!ADC_GetFlagStatus(ADCx, ADC_FLAG_EOC ));
    return ADC_GetConversionValue(ADCx);
}

u16 My_ADC_GetAverage(ADC_TypeDef* ADCx,u8 ch,u8 times)
{
    u32 temp_val=0;
    u8 t;
    for(t=0;t<times;t++)
    {
        temp_val+=My_ADC_GetValue(ADCx,ch);
    }
    return temp_val/times;
}

u8 My_ADC_GetPercent(ADC_TypeDef* ADCx,u8 ch,u8 times,float adcVlaueMin,float adcValueMax)
{
    u16 percent = 0;
    percent = My_ADC_GetAverage(ADCx,ch,times);
    //ADC_SMOKE_LOW-ADC_SMOKE_HIGH
    if(percent<adcVlaueMin)//
    {
        return 0;
    }
    if(percent>adcValueMax)
    {
        return 100;
    }
    else
    {
        percent = (percent-adcVlaueMin)*100/(adcValueMax-adcVlaueMin);
    }
    return percent;
}

float My_ADC_GetCurrent_ASC712(ADC_TypeDef* ADCx,u8 ch,u8 times,float scale)
{
    float volt = My_ADC_GetVoltage(ADCx,ch,times,scale);
    if(volt<Volt_ACS712_ZERO)
    {
        volt = 0;
    }
    else
    {
        volt = (volt-Volt_ACS712_ZERO)/0.185;
    }
    return volt;
}
u16 My_ADC_GetVersion(void)
{
    return VERSION;
}

