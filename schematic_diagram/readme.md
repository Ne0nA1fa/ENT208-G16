# Embedded Module Software Design Documentation

## Overview

This repository contains English-translated documentation for a set of common embedded hardware modules and control circuits used in a microcontroller-based wireless system. Each document focuses on the software design logic and the corresponding program flowchart for one module or subsystem.

The collection covers several typical embedded functions, including relay control, sound and light alarm control, infrared obstacle detection, camera and Wi-Fi serial communication, Bluetooth communication, voice playback, key input detection, ADC-based signal acquisition, OLED display control, and the overall main-function workflow of the system.

## Repository Contents

The files in this repository are organized as standalone module design notes. Each document generally includes:

- A short description of the module or circuit
- The basic working principle from the software control perspective
- How the microcontroller interacts with the module
- A software development flowchart or main logic flow

## File List

- `32-S297_Wireless_Version_Main_Function_Flowchart_EN.docx`  
  Main function flowchart for the wireless-version microcontroller system.

- `8050_Relay_Control_Circuit_English_Text_Only.docx`  
  English translation of the 8050 relay control circuit document.

- `8050_Sound_and_Light_Alarm_Circuit_Software_Design_EN.docx`  
  Software design for the 8050-based sound and light alarm circuit.

- `E18-D80NK_Infrared_Obstacle_Avoidance_Sensor_Software_Design_EN.docx`  
  Software design for the E18-D80NK infrared obstacle avoidance sensor.

- `ESP32_CAM_Camera_Module_Software_Design_EN.docx`  
  Software design for the ESP32-CAM camera module.

- `ESP8266_WiFi_Integrated_Module_Software_Design_EN.docx`  
  Software design for the ESP8266 Wi-Fi integrated module.

- `FY_Through_Hole_Resistor_Voltage_Divider_AD_Detection_Software_Design_EN.docx`  
  Software design for ADC detection using a resistor voltage divider circuit.

- `JDY-31_Bluetooth_Module_Software_Design_EN.docx`  
  Software design for the JDY-31 Bluetooth module.

- `JR6001_Voice_Playback_Module_Software_Design_EN.docx`  
  Software design for the JR6001 voice playback module.

- `KEY_Button_Circuit_Software_Design_EN.docx`  
  Software design for the key button input circuit.

- `MQ-3_Alcohol_Sensor_393_Module_AD_Detection_Software_Design_EN.docx`  
  Software design for ADC-based alcohol sensing using the MQ-3 module.

- `OLED_0.96_Inch_Display_Software_Design_EN.docx`  
  Software design for the 0.96-inch OLED display module.

## Functional Classification

### 1. Control and Output Modules
These documents describe how the microcontroller drives external output devices through GPIO or transistor-assisted control circuits.

- 8050 relay control
- 8050 sound and light alarm
- JR6001 voice playback
- OLED display control

### 2. Sensor and Input Modules
These documents focus on digital or analog signal acquisition and the related processing flow in the MCU.

- E18-D80NK infrared obstacle avoidance sensor
- KEY button circuit
- FY resistor voltage divider ADC detection
- MQ-3 alcohol sensor ADC detection

### 3. Communication Modules
These modules are mainly controlled through serial communication and are used for data transmission or external interaction.

- ESP32-CAM camera module
- ESP8266 Wi-Fi integrated module
- JDY-31 Bluetooth module

### 4. System-Level Logic
This part summarizes the initialization sequence and the main loop logic of the complete embedded system.

- 32-S297 wireless version main function flowchart

## Notes

- All translated files are English versions of the original module documents.
- The translations focus on textual content and software flow descriptions.
- The documents are suitable for coursework reference, firmware logic planning, and embedded system documentation.
- Each module file can be read independently, while the main function flowchart provides the overall system context.

## Suggested Use

This repository can be used as a compact reference set for:

- understanding module-level embedded software logic
- preparing firmware design documentation
- studying common MCU interaction methods such as GPIO, UART, and ADC
- reviewing system initialization and control flow for small embedded projects

## License / Usage

This repository is intended for learning, documentation, and project reference purposes. If these documents are used in coursework reports, presentations, or project documentation, it is recommended to keep the module names and system context consistent with the original design.
