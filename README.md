# ENT208-G16
# Smart Vehicle Safety Monitoring System

## Project Overview

This repository contains the development materials for the **ENT208-G16 Smart Vehicle Safety Monitoring System** project.

The project aims to develop a compact embedded vehicle safety monitoring prototype. The system combines microcontroller control, sensor detection, alarm output, communication modules, display modules, circuit design, software logic, and validation evidence to support safer driving behaviour monitoring.

The system is mainly designed for **older vehicles** that do not include integrated driver assistance or safety monitoring functions. It provides a practical, low-cost, modular retrofit solution for basic driving safety detection and warning.

## Problem Statement

Unsafe driving behaviours such as alcohol-impaired driving, fatigue, distraction, poor reaction, sudden acceleration, harsh braking, overspeeding, and delayed response can significantly increase road safety risks.

Many older vehicles lack built-in monitoring and warning systems. Existing aftermarket solutions are often expensive, limited to a single function, or difficult to customise for student engineering development.

This project addresses this gap by developing a system that can:

- monitor key safety-related driving conditions;
- detect potential risk factors through multiple sensors;
- provide real-time warning through sound, light, display, and relay-related output;
- support modular hardware and software expansion;
- maintain a complete set of design, validation, code, and documentation files in a structured GitHub repository.

## Target Users

The target users of this project include:

- owners of older vehicles without advanced driver assistance systems;
- elderly drivers who may require additional safety support;
- student engineering teams developing embedded system prototypes;
- fleet operators or managers requiring a low-cost driver safety monitoring solution;
- course assessors and project reviewers who need to inspect the design process, validation evidence, and final portfolio materials.

## Key Features

### 1. Microcontroller-Based Control

The system is based on STM32-related embedded development files and peripheral control logic. The repository includes CMSIS support files, Cortex-M3 core files, ADC-related code, and system initialization files.

### 2. Multi-Sensor Integration

The project supports multiple hardware modules, including:

- MQ-3 alcohol sensor module;
- E18-D80NK infrared obstacle avoidance sensor;
- ESP32-CAM camera module;
- ESP8266 Wi-Fi module;
- JDY-31 Bluetooth module;
- JR6001 voice playback module;
- OLED display module;
- push button input;
- voltage divider circuit;
- relay control circuit;
- buzzer and LED warning circuit.

### 3. Real-Time Warning Output

The system uses buzzer, LED, relay, voice playback, and display-related modules to provide immediate feedback when risk conditions are detected.

### 4. Software Logic and Flowchart Design

The repository contains software design documents and flowchart materials for the main system functions and individual modules.

### 5. Hardware Explanation and Circuit Analysis

The project includes circuit explanation documents for each major hardware module. These documents describe the module function, circuit principle, and expected role in the system.

### 6. Validation and Evidence Collection

The repository includes interview notes, session notes, validation records, and a validation evidence list to support user research, design justification, and final project evaluation.

### 7. Final Portfolio and Checkpoint Materials

The repository stores checkpoint preparation forms, project brief, validation report, and final technical documentation for assessment submission.

### 8. Function Demonstration Videos

Two function demonstration videos are included in the root directory to show the system operation and prototype behaviour.

## Project Goals

The project aims to build a system that is:

- practical;
- low-cost;
- modular;
- suitable for older vehicle retrofit scenarios;
- suitable for embedded system learning;
- clear in hardware and software documentation;
- supported by validation evidence;
- organised for team collaboration and course assessment.

## Repository Purpose

This repository serves as the central workspace for the ENT208-G16 group project. It is used to:

- store embedded source code and hardware-related files;
- manage circuit diagrams and schematic explanation documents;
- organise software design documents and logic diagrams;
- preserve validation evidence and user research records;
- store checkpoint and final portfolio submission files;
- provide function demonstration videos;
- support collaboration and version control through GitHub.

## Current Repository Structure

```text
.
├── README.md
├── ENT208TC_TechnicalDoc_Template.docx
├── Function.mp4
├── Function2.mp4
│
├── Checkpoint/
│   ├── Checkpoint Prep Form _ ENT208TC Industry Readiness1.pdf
│   └── Checkpoint Prep Form _ ENT208TC Industry Readiness2.pdf
│
├── Final Portfolio/
│   ├── ENT208TC_TechnicalDoc.docx
│   ├── Session1Group16_ProjectBrief.docx
│   └── Session1Group16_ValidationReport.pdf
│
├── Validation/
│   ├── Interview recording&session note1.docx
│   ├── Interview recording&session note2.docx
│   ├── Interview recording&session note5.docx
│   ├── Interview recording&session note6.docx
│   ├── Session note3.docx
│   ├── Session note4.docx
│   ├── Session note7.docx
│   ├── Session note8.docx
│   └── Validation Evidence List.docx
│
├── core_code/
│   ├── hardware/
│   ├── Singlechip Main Code
│   ├── cmsis_armclang.h
│   ├── cmsis_compiler.h
│   ├── core_cm3.c
│   ├── core_cm3.h
│   ├── my_adc.c
│   └── system_stm32f10x.c
│
├── data/
│   └── .gitkeep
│
├── image/
│
├── kanban/
│   ├── .gitkeep
│   └── kanban board_Session1_G16.docx
│
├── logic_diagram/
│   ├── 32-S297_Minimum_System_Version_Schematic.pdf
│   ├── 32-S297_Net_Label_Version_Schematic.pdf
│   ├── 32-S297_PCB_Layout.pdf
│   ├── 32-S297_Wiring_Version_Schematic.pdf
│   └── readme.md
│
├── schematic_analysis/
│   ├── 5V Power Supply Circuit - Circuit Explanation.docx
│   ├── 8050 Buzzer Alarm and LED - Circuit Explanation.docx
│   ├── 8050 Relay Control - Circuit Explanation.docx
│   ├── E18-D80NK Infrared Obstacle Avoidance Sensor - Circuit Explanation.docx
│   ├── ESP32-CAM Camera Module - Circuit Explanation.docx
│   ├── ESP8266 Wi-Fi Integrated Module - Circuit Explanation.docx
│   ├── JDY-31 Bluetooth Module - Circuit Explanation.docx
│   ├── JR6001 Voice Playback Module - Circuit Explanation.docx
│   ├── MQ-3 Alcohol Sensor Module - Circuit Explanation.docx
│   ├── OLED 0.96-inch Display Module - Circuit Explanation.docx
│   ├── Push Button Circuit Design - Circuit Explanation.docx
│   ├── STM32F103C8T6 Microcontroller Core Circuit - Circuit Explanation.docx
│   ├── Through-Hole Resistor Voltage Divider Circuit - Circuit Explanation.docx
│   └── readme.md
│
└── schematic_diagram/
    ├── 32-S297_Wireless_Version_Main_Function_Flowchart_EN.docx
    ├── 8050_Relay_Control_Circuit_English_Text_Only.docx
    ├── 8050_Sound_and_Light_Alarm_Circuit_Software_Design_EN.docx
    ├── E18-D80NK_Infrared_Obstacle_Avoidance_Sensor_Software_Design_EN.docx
    ├── ESP32_CAM_Camera_Module_Software_Design_EN.docx
    ├── ESP8266_WiFi_Integrated_Module_Software_Design_EN.docx
    ├── FY_Through_Hole_Resistor_Voltage_Divider_AD_Detection_Software_Design_EN.docx
    ├── JDY-31_Bluetooth_Module_Software_Design_EN.docx
    ├── JR6001_Voice_Playback_Module_Software_Design_EN.docx
    ├── KEY_Button_Circuit_Software_Design_EN.docx
    ├── MQ-3_Alcohol_Sensor_393_Module_AD_Detection_Software_Design_EN.docx
    ├── OLED_0.96_Inch_Display_Software_Design_EN.docx
    └── readme.md
