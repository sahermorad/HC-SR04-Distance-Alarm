HC-SR04 Distance Alarm 🚨

📌 Project Overview

An Arduino-based ultrasonic distance alarm system that measures the distance between objects using the HC-SR04 ultrasonic sensor.

The system features three alert levels, providing different audible warnings depending on the measured distance.

🛠️ Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Buzzer
- Red LED
- 220Ω Resistor

🚨 Alert Levels

The system operates using three warning levels:

Level| Distance| Alert Behavior
🟢 Safe Zone| More than 30 cm| No sound or LED
🟡 Level 1| 15–30 cm| Slow intermittent beep (1000 Hz)
🟠 Level 2| 5–15 cm| Fast intermittent beep (1500 Hz)
🔴 Level 3| 5 cm or less| Continuous alarm (2000 Hz) and red LED ON

Alert Timing

- Level 1: 400 ms ON / 400 ms OFF.
- Level 2: 100 ms ON / 100 ms OFF.
- Level 3: Continuous buzzer sound.

⚙️ Technologies

- Arduino Uno
- C / C++
- Ultrasonic Distance Measurement
- Wokwi Simulator

📂 Project Files

- Arduino source code (.ino)
- Circuit configuration (diagram.json)
- Wokwi project information

🔗 Simulation

"View Project on Wokwi" (https://wokwi.com/projects/480396076951122945)

🎯 Project Goals

- Understand ultrasonic distance measurement.
- Implement a three-level warning system.
- Practice Arduino programming.
- Work with electronic sensors and output devices.

---

Developed by Saher Morad
Learning, Building, and Improving.
