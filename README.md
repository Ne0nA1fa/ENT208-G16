# ENT208-G16
# Smart Vehicle Safety Monitoring System

## Project Overview
This project develops a **Smart Vehicle Safety Monitoring System**, a compact embedded system designed to monitor driver behavior and vehicle operating conditions in real time. The system combines sensors, microcontroller control, warning modules, software logic, and technical documentation to improve driving safety through timely detection and alerting.

The project is particularly intended for **older vehicles** that do not include built-in advanced driver assistance functions. It aims to provide a practical, low-cost, and modular retrofit solution for basic driving safety monitoring.

## Problem Statement
Many traffic safety risks are associated with unsafe driving behaviors such as fatigue, distraction, sudden acceleration, harsh braking, overspeeding, and delayed driver response. Older vehicles often lack integrated monitoring and warning systems, while many aftermarket solutions are either too expensive, too limited, or difficult to customize.

This project addresses that gap by building a system that can:
- monitor key safety-related driving conditions in real time,
- trigger immediate warnings through sound and light,
- support sensor-based driver and vehicle status detection,
- maintain project design files, code, and documentation in an organized repository.

## Target Users
The main target users of this project are:
- **Owners of older vehicles** without modern driver assistance features
- **Elderly drivers** who may be more vulnerable to fatigue or delayed reaction
- **Student developers and engineering teams** building embedded safety prototypes
- **Fleet operators or managers** who need a simple and low-cost driver safety monitoring solution

## Key Features
- **Microcontroller-based control**
  Built around STM32-related embedded development files and peripheral control logic.

- **Sensor integration**
  Supports multiple sensing and functional modules such as infrared obstacle sensing, alcohol sensing, Bluetooth/Wi-Fi communication, display modules, and button input.

- **Real-time warning**
  Uses buzzer, LED, and relay-related circuits to provide immediate feedback or alarm output.

- **Circuit and software documentation**
  Includes schematic explanation documents, software design files, flowcharts, and PCB-related materials.

- **Structured project management**
  Stores technical documents, kanban materials, diagrams, and source code in a clear GitHub repository structure.

## Project Goals
The project aims to build a system that is:
- practical,
- low-cost,
- modular,
- easy to understand and develop,
- suitable for embedded system learning and vehicle safety monitoring scenarios.

## Repository Purpose
This repository serves as the central workspace for the ENT208 group project. It is used to:
- store source code and embedded development files,
- manage circuit design and schematic-related documents,
- organize software design documents and logic diagrams,
- preserve project reports, templates, and progress records,
- support collaboration and version control through GitHub.

## Current Repository Structure
```text
.
├── README.md
├── ENT208TC_TechnicalDoc_Template.docx
├── core_code/
│   ├── hardware/
│   ├── Singlechip Main Code
│   ├── cmsis_armclang.h
│   ├── cmsis_compiler.h
│   ├── core_cm3.c
│   ├── core_cm3.h
│   ├── my_adc.c
│   └── system_stm32f10x.c
├── data/
├── image/
├── kanban/
│   ├── .gitkeep
│   └── kanban board_Session1_G16.docx
├── logic_diagram/
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
```

## Folder Description

### `core_code/`
Stores the main embedded source code and core support files for the microcontroller-based system. This folder includes CMSIS-related headers, Cortex-M3 core files, ADC-related source code, system initialization files, and a `hardware/` subfolder for hardware-related code or supporting files.

### `data/`
Used for storing project data files, reports, templates, draft materials, or other supporting documentation. It can also be used for experiment records, processed results, or proposal materials.

### `image/`
Used for screenshots, illustrations, exported diagrams, report figures, UI images, and other visual assets required by the project.

### `kanban/`
Contains project planning and task management materials. At present, it includes the kanban board document for Session 1 and a `.gitkeep` file to preserve the folder structure in the repository.

### `logic_diagram/`
Used for logic diagrams, functional block diagrams, system workflows, and other materials related to control logic or process design.

### `schematic_analysis/`
Stores English circuit explanation documents for individual hardware modules. These files describe circuit principles, module functions, and hardware usage without modifying the original image content. This folder works as the hardware-side explanation archive.

### `schematic_diagram/`
Stores software-design-related documents and main functional flowchart materials for the corresponding modules. It currently includes English software design files for Bluetooth, Wi-Fi, OLED, relay, buzzer alarm, alcohol sensing, infrared sensing, and related modules.

## Main Documentation
- **`README.md`**: Main repository introduction and structure guide
- **`ENT208TC_TechnicalDoc_Template.docx`**: Technical document template for the project
- **folder-level `readme.md` files**: Local descriptions for subfolders such as `schematic_analysis/` and `schematic_diagram/`

## Notes
- The repository currently contains both **hardware explanation documents** and **software design documents** in English.
- Some folders are prepared in advance for later expansion, such as `data/`, `image/`, and `logic_diagram/`.
- File and folder naming is being standardized to support clearer version control and easier team collaboration.

## Suggested Next Step
To make the repository more complete, the next update could add:
- a short description file inside `core_code/`,
- a document index for `schematic_analysis/` and `schematic_diagram/`,
- a version record or changelog for major file updates.
