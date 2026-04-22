# 32-S297 Embedded Hardware Design Files

## Overview

This repository contains hardware design files for the **32-S297 wireless-version embedded control system**. The current collection focuses on the board-level design deliverables, including the PCB layout and several schematic variants.

These files are provided in PDF format for viewing, review, documentation, and coursework or project reference.

## Files Included

### 1. `32-S297_PCB_Layout.pdf`
PCB layout drawing of the 32-S297 board.

### 2. `32-S297_Wiring_Version_Schematic.pdf`
Schematic in the wiring-based representation, showing direct module interconnections.

### 3. `32-S297_Net_Label_Version_Schematic.pdf`
Schematic in the net-label representation, using named signal connections for a cleaner circuit description.

### 4. `32-S297_Minimum_System_Version_Schematic.pdf`
Minimum-system schematic, including the MCU core circuit and the essential supporting hardware.

## Main Hardware Content

According to the schematic PDFs, the design centers on an STM32-based control board and integrates several typical embedded modules, including:

- wireless communication interface
- OLED display interface
- key input circuit
- buzzer alarm circuit
- sensor module interface
- infrared obstacle avoidance module interface
- voice playback module interface
- ignition-control relay circuit
- power input and power regulation section
- minimum-system / core-board circuit

## Purpose of This Repository

This repository can be used for:

- hardware design review
- embedded system documentation
- circuit explanation and presentation
- coursework submission support
- project archiving and version management

## Notes

- All files are retained in PDF format for easy preview and distribution.
- The contents of the PDFs are unchanged from the source versions; only the filenames have been standardized in English.
- Different schematic versions are kept because they serve different documentation purposes: direct wiring view, net-label view, and minimum-system view.

## Suggested Reading Order

If you are viewing these files for the first time, the following order is recommended:

1. `32-S297_Minimum_System_Version_Schematic.pdf`  
   Understand the MCU core and essential support circuits first.

2. `32-S297_Wiring_Version_Schematic.pdf`  
   Review how the functional modules are directly connected.

3. `32-S297_Net_Label_Version_Schematic.pdf`  
   Check the signal-level relationships more clearly through net labels.

4. `32-S297_PCB_Layout.pdf`  
   Finally, examine the physical board routing and component placement.

## Project Context

The 32-S297 design appears to be a small embedded control platform intended for module integration, sensor acquisition, alarm indication, serial communication, and actuator control within a wireless embedded application.

---

If needed, this README can be further expanded with a block diagram, module-to-pin mapping table, or a repository tree.
