/*
    Code by : Projects_learner
    Project name :  PIR Passive Infrared Motion Sensor using Ardino UNO
    Modified Date : 06-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-pir-passive-infrared-motion-sensor
*/

int pirPin = 2; // PIR sensor connected to digital pin 2
int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(pirPin, INPUT); // Set pirPin as input
  pinMode(ledPin, OUTPUT); // Set ledPin as output
  Serial.begin(9600); // Start the serial communication
}

void loop() {
  int motionDetected = digitalRead(pirPin); // Read the PIR sensor output

  if (motionDetected == HIGH) { // If motion is detected
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off the LED
  }

  delay(500); // Small delay to avoid rapid triggering
}
