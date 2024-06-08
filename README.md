# PIR Motion Sensor with Relay Control and Serial Monitor Feedback

## Description

This project uses an Arduino to interface with a Passive Infrared (PIR) motion sensor to control a relay. The relay switches based on the motion detected by the PIR sensor. Additionally, the state of the sensor and relay is displayed on the serial monitor, providing real-time feedback. This setup is ideal for creating automatic control systems, such as lighting or alarms, that respond to motion detection.

## Components Needed

1. **Arduino UNO**
2. **PIR Motion Sensor**
3. **Relay Module**
4. **Jumper Wires**
5. **Breadboard**

## Circuit Wiring

1. **PIR Motion Sensor:**
   - **VCC** to Arduino **5V**.
   - **GND** to Arduino **GND**.
   - **OUT** (signal pin) to Arduino digital pin **10**.

2. **Relay Module:**
   - **VCC** to Arduino **5V**.
   - **GND** to Arduino **GND**.
   - **IN** (control pin) to Arduino digital pin **12**.

## Steps

1. **Connect the Components:**
   - Follow the wiring instructions to connect the PIR sensor and relay module to the Arduino.

2. **Upload the Code:**
   - Open the Arduino IDE.
   - Write or paste the code into the IDE.
   - Select the correct board and port from the Tools menu.
   - Upload the code to the Arduino board.

3. **Monitor the Output:**
   - Open the Serial Monitor from the Arduino IDE to observe the real-time status of the sensor and relay.
   - The Serial Monitor will display "Motion Detected!" when the PIR sensor detects motion and "No Motion" when there is no motion detected.

## Project Operation

- **Initialization:**
  - The Arduino is set up to read the state of the PIR sensor and control the relay module.
  - Serial communication is initiated at a baud rate of 9600 bps for monitoring.

- **Motion Detection:**
  - The PIR sensor detects infrared signals from moving objects.
  - When motion is detected, the relay is activated, turning on any connected devices.
  - The state of the sensor and relay is displayed on the Serial Monitor.

- **No Motion:**
  - When no motion is detected, the relay is deactivated, turning off any connected devices.
  - The Serial Monitor updates to reflect this status.

## Applications

1. **Security Systems:**
   - Automatically activate alarms or lights when motion is detected.
2. **Home Automation:**
   - Control appliances or lighting systems based on presence.
3. **Energy Saving:**
   - Turn off devices when no motion is detected to save power.

---

### Whether you're working on electronics projects, IoT applications, or robotics innovations, Projects Learner is your go-to platform for guidance and expertise.

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner