/*
    Project name : Arduino Uno PIR Motion Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-pir-motion-sensor
*/

// Pin connected to the output of the PIR motion sensor
const int pirPin = 2;

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  pinMode(pirPin, INPUT);  // Set PIR pin as input
}

void loop() {
  int pirState = digitalRead(pirPin);  // Read PIR sensor state

  if (pirState == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion detected");
  }

  delay(1000);  // Delay for readability
}
