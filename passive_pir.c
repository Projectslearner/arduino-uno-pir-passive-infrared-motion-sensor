/*
    Code by : Projects_learner
    Project name :  PIR Passive Infrared Motion Sensor using Ardino UNO
    Modified Date : 06-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-pir-passive-infrared-motion-sensor
*/

int sensorPin = 10;  // Define the PIR sensor pin
int relayPin = 12;   // Define the relay pin

void setup() {
  Serial.begin(9600);  // Initialize Serial communication at 9600 baud rate
  pinMode(sensorPin, INPUT);  // Set PIR sensor pin as input
  pinMode(relayPin, OUTPUT);  // Set relay pin as output
}

void loop() {
  int value = digitalRead(sensorPin);  // Read the value from the PIR sensor

  digitalWrite(relayPin, value);  // Set relay pin state based on PIR sensor value

  // Output the state of the PIR sensor to the Serial Monitor
  if (value == HIGH) {
    Serial.println("Motion Detected!");
  } else {
    Serial.println("No Motion");
  }

  delay(500);  // Add a small delay for stability
}
