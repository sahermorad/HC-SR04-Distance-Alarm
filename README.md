HC-SR04 Distance Alarm 🚨

Project Overview

An Arduino-based ultrasonic distance alarm system that detects nearby objects using the HC-SR04 ultrasonic sensor.

The system provides three warning levels based on the measured distance, using different buzzer frequencies and alert patterns. A red LED activates at the critical distance level.

Components

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Buzzer
- Red LED
- 220Ω Resistor

Alert Levels

Zone| Distance| Buzzer Frequency| Alert Pattern| LED
Safe Zone| > 30 cm| OFF| No Alert| OFF
Level 1| > 15 cm and ≤ 30 cm| 1000 Hz| 400ms ON / 400ms OFF| OFF
Level 2| > 5 cm and ≤ 15 cm| 1500 Hz| 100ms ON / 100ms OFF| OFF
Level 3| ≤ 5 cm| 2000 Hz| Continuous| ON

How It Works

1. The HC-SR04 sensor sends ultrasonic pulses.
2. The Arduino measures the echo duration.
3. The distance is calculated in centimeters.
4. The system selects the appropriate warning level.
5. The buzzer and LED respond according to the detected distance.

Technologies

- Arduino Uno
- C/C++
- Ultrasonic Distance Measurement
- Embedded Systems
- Wokwi Simulation

Project Files

- "sketch.ino" – Arduino source code.
- "diagram.json" – Circuit configuration.

Simulation

"Run the project on Wokwi" (https://wokwi.com/projects/480396076951122945)

Project Objective

To practice embedded programming, ultrasonic sensing, distance measurement, and multi-level electronic alert systems.

---

Developed by Saher Morad
