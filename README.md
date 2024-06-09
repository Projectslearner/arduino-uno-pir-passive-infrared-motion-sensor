# PIR Motion Sensor with LED Indicator

#### Project Overview

This project uses a Passive Infrared (PIR) motion sensor to detect motion. When motion is detected, an LED lights up, and a message is printed to the Serial Monitor.

#### Components Needed

1. **Arduino Board**
2. **PIR Motion Sensor**
3. **LED**
4. **Resistor (for the LED, e.g., 220Ω)**
5. **Jumper Wires**
6. **Breadboard (optional)**

### Block Diagram



#### Pin Connections

1. **PIR Motion Sensor:**
   - **VCC**: Connect to Arduino 5V
   - **GND**: Connect to Arduino GND
   - **Output**: Connect to Arduino digital pin 2

2. **LED:**
   - **Anode (+)**: Connect to Arduino digital pin 13 through a current-limiting resistor (e.g., 220Ω)
   - **Cathode (-)**: Connect to Arduino GND

#### Instructions

1. **Set Up the Circuit:**
   - Connect the PIR motion sensor to the Arduino board as per the pin connections mentioned above.
   - Connect the LED to digital pin 13 on the Arduino with a resistor in series to limit the current.
   - Ensure all components are properly grounded and connected to the power supply.

2. **Initialize the System:**
   - Configure the PIR sensor pin as an input.
   - Configure the LED pin as an output.
   - Start serial communication at a baud rate of 9600 to enable data transmission between the Arduino and a connected device (e.g., computer).

3. **Read Sensor Values:**
   - In the `loop()` function, read the digital output value from the PIR motion sensor connected to the specified digital pin (2).
   - Print the motion detection status to the Serial Monitor for real-time feedback.

4. **Check for Motion:**
   - If the PIR sensor detects motion (output is HIGH), turn on the LED and print "Motion detected!" to the Serial Monitor.
   - If no motion is detected (output is LOW), turn off the LED.

5. **Delay and Repeat:**
   - Use the `delay()` function to introduce a short delay (e.g., 500 milliseconds) between sensor readings, ensuring stability and preventing rapid triggering.

#### Applications

- **Security Systems:** Use the setup to detect motion and trigger alarms or notifications in security systems.
- **Automated Lighting:** Integrate the motion sensor with lighting systems to turn lights on when motion is detected and off when no motion is detected.
- **Interactive Projects:** Use the motion detection feature in interactive projects and installations.

---

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner