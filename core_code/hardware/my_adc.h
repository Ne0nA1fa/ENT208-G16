
#ifndef __MY_ADC_H
#define __MY_ADC_H
#include "my_include.h"

#define Volt_Ref_ADC                3.275
#define Volt_ACS712_ZERO            2.51

#define ADC_GAS_HIGH                3000
#define ADC_GAS_LOW                 200

#define ADC_SMOKE_HIGH              900
#define ADC_SMOKE_LOW               280

//#define ADC_SMOKE_HIGH              2500
//#define ADC_SMOKE_LOW               1400

#define ADC_LIGHT_HIGH              4000
#define ADC_LIGHT_LOW               10

const static MyPinDef Pins_ADC[] = {PA0};

#define My_ADC_GetGas(m,n,t)                        My_ADC_GetPercent(m,n,t,ADC_GAS_LOW,ADC_GAS_HIGH)
#define My_ADC_GetSmoke(m,n,t)                      My_ADC_GetPercent(m,n,t,ADC_SMOKE_LOW,ADC_SMOKE_HIGH)
#define My_ADC_GetLight(m,n,t)                      (100-My_ADC_GetPercent(m,n,t,ADC_LIGHT_LOW,ADC_LIGHT_HIGH))
#define My_ADC_GetVoltage(m,ch,n,scale)             ((float)My_ADC_GetAverage(m,ch,n)*Volt_Ref_ADC*scale/4095)
#define My_ADC_GetCapacity_Li(m,n,t)                My_ADC_GetPercent(m,n,t,3.4,4.15)

void My_ADC_Init(ADC_TypeDef* ADCx);

void My_ADC_Init_DMA(ADC_TypeDef* ADCx,u16 *adcValue,u16 adcDataNumber);

void My_ADC_StartADC_DMA(ADC_TypeDef* ADCx,u16 adcDataNumber);
bool My_ADC_DMAComplete(ADC_TypeDef* ADCx);

u8 My_ADC_GetADCChannel(ADC_TypeDef* ADCx,MyPinDef pin);
u16  My_ADC_GetValue(ADC_TypeDef* ADCx,u8 ch); 
u16 My_ADC_GetAverage(ADC_TypeDef* ADCx,u8 ch,u8 times);
u8 My_ADC_GetPercent(ADC_TypeDef* ADCx,u8 ch,u8 times,float adcVlaueMin,float adcValueMax);
float My_ADC_GetCurrent_ASC712(ADC_TypeDef* ADCx,u8 ch,u8 times,float scale);
u16 My_ADC_GetVersion(void);
 
#endif 
