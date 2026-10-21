# Home Appliances Control System using IOT

## Project Overview

The Home Appliances Control System using IOT explores remote and automatic operation of household appliances using NodeMCU, sensors and mobile/web-based services. The work in the report covers four applications:

1. **Tube lights and fans:** voice commands through Google Assistant, IFTTT and Adafruit IO.
2. **Air conditioner:** automatic switching according to DHT11 temperature readings and a relay.
3. **Coffee vending machine:** ultrasonic distance detection and a switching output.
4. **Water-level monitoring:** ultrasonic water-level readings through NodeMCU and the Blynk mobile application.

The report documents **NodeMCU (ESP8266), Adafruit IO, IFTTT, Google Assistant, Blynk, DHT11, ultrasonic sensors and relay modules**.

## Implementation

The project includes Arduino code for these two sections:

- [Water Level Monitoring and Control](code/water_level_monitoring/water_level_monitoring.ino)
- [Coffee Vending Machine](code/coffee_vending_machine/coffee_vending_machine.ino)

The Blynk token and Wi-Fi network credentials in the printed water-level sketch have been replaced with placeholders. Other control steps and the original decision condition remain as documented. The sketches use older NodeMCU/Blynk conventions and **have not been retested with current libraries or hardware**.

