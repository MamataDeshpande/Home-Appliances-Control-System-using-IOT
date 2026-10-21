# Home Appliances Control System using IOT

## Project Overview

The Home Appliances Control System using IOT explores remote and automatic operation of household appliances using NodeMCU, sensors and mobile/web-based services. The work in this project covers four applications:

1. **Tube lights and fans:** voice commands through Google Assistant, IFTTT and Adafruit IO.
2. **Air conditioner:** automatic switching according to DHT11 temperature readings and a relay.
3. **Coffee vending machine:** ultrasonic distance detection and a switching output.
4. **Water level monitoring:** ultrasonic water level readings through NodeMCU and the Blynk mobile application.


## Implementation

The project includes Arduino code for these two sections:

- [Water Level Monitoring and Control](code/water_level_monitoring/water_level_monitoring.ino)
- [Coffee Vending Machine](code/coffee_vending_machine/coffee_vending_machine.ino)

The Blynk token and Wi-Fi network credentials in the printed water-level sketch have been replaced with placeholders. Other control steps and the original decision condition remain as documented. The sketches use older NodeMCU/Blynk conventions and **have not been retested with current libraries or hardware**.

## Project Diagrams

<img width="766" height="443" alt="image" src="https://github.com/user-attachments/assets/0e40a4b1-baff-4b8a-bb93-06e25e596c24" />


<img width="835" height="504" alt="image" src="https://github.com/user-attachments/assets/bfb4eaaf-e773-45ed-ac19-5b3c6505e5d8" />


<img width="289" height="516" alt="image" src="https://github.com/user-attachments/assets/0a3bdf6a-f896-4082-9efe-3c3a23e4aa45" />


<img width="863" height="509" alt="image" src="https://github.com/user-attachments/assets/682022ec-b7df-4a6e-9102-9e45a56587d3" />


<img width="898" height="406" alt="image" src="https://github.com/user-attachments/assets/cafb6352-37a6-4c3f-8cce-05d239fd75d9" />


<img width="916" height="495" alt="image" src="https://github.com/user-attachments/assets/66cb0d18-eda4-47ce-aa26-9361ecf889eb" />


<img width="743" height="536" alt="image" src="https://github.com/user-attachments/assets/83fcb54c-bee3-4d48-a925-ae2183511bdf" />


<img width="874" height="506" alt="image" src="https://github.com/user-attachments/assets/8f64c359-7c3c-4748-bc71-003726d4435e" />
