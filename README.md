# ENT208-G16
# Smart Vehicle Safety Monitoring System

## Project Overview
This project develops a **Smart Vehicle Safety Monitoring System**, a compact sensor-based device designed to monitor driver behavior and vehicle motion in real time. The system aims to improve driving safety by detecting unsafe driving events and providing immediate alerts to the driver.

It is especially designed for **older vehicles** that do not have built-in advanced driver assistance features, offering a practical and affordable way to add basic safety monitoring functions.

## Problem Statement
Road traffic accidents are often related to driver fatigue, distraction, speeding, sudden acceleration, hard braking, and other unsafe driving behaviors. Many older vehicles do not include integrated safety monitoring systems, and existing aftermarket solutions are often expensive or limited in functionality.

This project addresses that gap by building a system that can:
- detect unsafe driving behavior in real time,
- alert the driver immediately,
- record incidents for later review and analysis.

## Target Users
The main target users of this project are:
- **Owners of older vehicles** without modern driver assistance features,
- **Elderly drivers** who may be more vulnerable to fatigue or slower reaction times,
- **Fleet operators or logistics managers** who need a simple way to monitor driver safety performance.

## Key Features
- **Hands-off detection**  
  Detects whether the driver’s hands are properly positioned on the steering wheel using a pressure sensor.

- **Real-time alerts**  
  Activates visual and audible warnings through an LED strip and buzzer when unsafe behavior is detected.

- **Trip data logging**  
  Records incidents and driver behavior data for later review.

- **Driver behavior monitoring**  
  Detects speeding, sudden acceleration, and hard braking using motion sensors.

- **Fatigue detection**  
  Monitors driver movement patterns to identify possible drowsiness.

## Project Goals
The project aims to create a system that is:
- practical,
- low-cost,
- easy to use,
- suitable for retrofitting older vehicles,
- useful for both individual drivers and fleet monitoring scenarios.

## Success Metrics
The system will be evaluated based on the following targets:
- **Detection accuracy:** at least 80% of simulated unsafe events are correctly identified
- **User response time:** driver responds to alerts within 3 seconds
- **User satisfaction:** at least 4 out of 5 users find the system useful
- **Data reliability:** system operates continuously for 4 hours without crashing or losing data
- **False alarm rate:** no more than 2 false alerts per hour during normal driving simulation

## Purpose of This Repository
This repository is the central workspace for the group project. It is used to:
- store and manage source code,
- document project progress,
- keep design files and technical notes,
- track testing results,
- support team collaboration and version control through GitHub.

By using this repository, all team members can work on the same project in an organized and transparent way.

## Repository Structure
A suggested structure for this repository is:

```text
.
├── README.md
├── docs/          # project documents, reports, notes
├── src/           # source code
├── hardware/      # sensor setup, circuit or device-related files
├── tests/         # testing scripts and test records
└── assets/        # images, diagrams, presentation materials
