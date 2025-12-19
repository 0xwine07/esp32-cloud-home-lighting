# Cloud-Based Home Lighting Control (ESP32)

This project demonstrates a cloud-based home lighting control system using an ESP32 microcontroller and the Blynk IoT platform.  
The system allows an AC bulb to be turned ON and OFF remotely through a relay module.

The project is implemented as a functional proof-of-concept to validate cloud-to-device communication and safe actuator control.

---

## Features
- Remote ON/OFF control of AC lighting
- Cloud-based control using Blynk IoT
- ESP32 Wi-Fi connectivity
- Relay-based electrical isolation
- Safe default OFF behavior at startup

---

## Hardware Overview
The ESP32 receives control commands from the Blynk Cloud and drives a relay module connected to an AC bulb.  
The bulb is connected between the COM and NO contacts of the relay, ensuring the light remains OFF by default.

Detailed hardware documentation:
- [Components List](hardware/Components_List.md)
- [System Architecture](hardware/System_Architecture.md)

---

## Software
- ESP32 firmware developed using Arduino IDE
- Blynk IoT mobile application for cloud control

Firmware source:
- [ESP32 Cloud Lighting Firmware](firmware/esp32_cloud_lighting.ino)

---

## Wiring Diagram
![Wiring Diagram](images/wiring_diagram.png)

---

## Demo
A working demonstration of the system is available under the **Issues** section of this repository.

---

## Design Notes
- The relay switches only the AC live line.
- Electrical isolation is provided by the relay module.
- The system is demonstrated using a single lighting load as a proof-of-concept.

---

## License
MIT License
