## System Architecture

The system implements a cloud-based home lighting control using an ESP32 microcontroller.

- A smartphone running the Blynk IoT application sends control commands.
- Commands are routed through the Blynk Cloud.
- The ESP32 connects to the cloud over Wi-Fi and receives ON/OFF commands.
- The ESP32 drives a relay module using a GPIO pin.
- The relay switches an AC bulb by controlling the live wire.
- The ESP32 is powered via USB, and the relay module is powered from the ESP32 VIN (5V from USB).

The relay provides electrical isolation between the low-voltage control circuit and the high-voltage AC load, ensuring safe operation.
