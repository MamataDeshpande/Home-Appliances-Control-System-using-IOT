# Home Appliances Control System using IOT

## Project Overview

The Home Appliances Control System using IOT explores remote and automatic operation of household appliances using NodeMCU, sensors and mobile/web-based services. The work in the report covers four applications:

1. **Tube lights and fans:** voice commands through Google Assistant, IFTTT and Adafruit IO.
2. **Air conditioner:** automatic switching according to DHT11 temperature readings and a relay.
3. **Coffee vending machine:** ultrasonic distance detection and a switching output.
4. **Water-level monitoring:** ultrasonic water-level readings through NodeMCU and the Blynk mobile application.

The report documents **NodeMCU (ESP8266), Adafruit IO, IFTTT, Google Assistant, Blynk, DHT11, ultrasonic sensors and relay modules**.

## Implementation

The report includes Arduino code for these two sections:

- [Water Level Monitoring and Control](code/water_level_monitoring/water_level_monitoring.ino)
- [Coffee Vending Machine](code/coffee_vending_machine/coffee_vending_machine.ino)

The code follows Chapter V of the original report. The Blynk token and Wi-Fi network credentials in the printed water-level sketch have been replaced with placeholders. Other control steps and the original decision condition remain as documented. The sketches use older NodeMCU/Blynk conventions and **have not been retested with current libraries or hardware**.

The voice-controlled light/fan system and DHT11-based air-conditioner control are described with original figures in the report; source code for those sections was not provided in the report.

## Project Figures

The figures below are taken from the original report.

### Figure 1 — Automatic Control of Tube Light and Fans through Voice Detection
![Figure 1](images/fig_01_voice_control.png)

### Figure 2 — Controlling Air Conditioner through DHT11
![Figure 2](images/fig_02_ac_dht11.png)

### Figure 3 — Flow Chart of Coffee Vending Machine
![Figure 3](images/fig_03_coffee_vending_flowchart.png)

### Figure 4 — Controlling the Coffee Vending Machine
![Figure 4](images/fig_04_coffee_vending_control.png)

### Figure 5 — Block Diagram of Water Monitoring System
![Figure 5](images/fig_05_water_monitoring_block_diagram.jpeg)

### Figure 6 — Circuit Diagram of Water Monitoring System
![Figure 6](images/fig_06_water_monitoring_circuit.jpeg)

### Figure 7 — Architecture of Home Appliances Control System using IOT
![Figure 7](images/fig_07_system_architecture.png)

### Figure 8 — PDCA Analysis
![Figure 8](images/fig_08_pdca_analysis.png)

### Figure 9 — Workflow of Automatic Tube Light and Fan Control through Voice Detection
![Figure 9](images/fig_09_voice_control_workflow.png)

### Figure 10 — Water Level Monitoring Result
![Figure 10](images/fig_10_water_level_result.png)

## Original Report

[View report (credentials and registration number removed)](report/1.iot-redacted.pdf).

The figures have not been redesigned. Figure 8 was captured from the original vector/text PDF page. The other figures retain the embedded image data from the report. Personal access credentials were removed before preparing the report for online publication.

**Note:** Do not operate water pumps, AC units or mains-powered loads from these examples without proper isolation and electrical safety measures. The original report records a student project; it does not establish certification for household deployment.
