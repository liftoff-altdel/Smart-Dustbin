# Smart Dustbin (ESP32)

## About the Project

This project is an ESP32-based smart dustbin designed to provide touch-free waste disposal. An ultrasonic sensor detects when a user places their hand near the dustbin, and the ESP32 controls a servo motor to automatically open and close the lid after a short delay.

The project demonstrates the use of embedded systems, sensor interfacing, and automation to improve hygiene and user convenience.

---

## Features

- Automatic lid opening and closing
- Touch-free operation
- Ultrasonic distance sensing
- Servo motor control
- ESP32-based implementation
- Low-cost and easy-to-build design

---

## Components Used

- ESP32 Development Board
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90/MG90S)
- Jumper Wires
- Breadboard
- Power Supply

---

## Working Principle

1. The ultrasonic sensor continuously measures the distance in front of the dustbin.
2. When an object is detected within the predefined range, the ESP32 sends a signal to the servo motor.
3. The servo rotates to open the lid.
4. After a short delay, the lid automatically closes.
5. The system then waits for the next detection.

---

## Repository Structure

```
Smart-Dustbin-ESP32
│
├── ESP32_Code
├── Circuit
├── Images
├── Report
└── README.md
```

---

## Applications

- Homes
- Offices
- Hospitals
- Schools and Colleges
- Public Places

---

## Future Improvements

- IoT monitoring using Wi-Fi
- Waste level monitoring
- Mobile app integration
- Voice assistant support
- Battery-powered operation

---

## Author

**Sandesh Kumar Jha**

B.Tech – Cyber Physical Systems

Manipal Institute of Technology
