/*
    Project name : ESP8266 LED BLINKING
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-led-blinking
*/

// Define LED pin
const int ledPin = D1; // GPIO pin D1 on NodeMCU

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(1000); // Wait for 1 second (1000 milliseconds)
  digitalWrite(ledPin, LOW); // Turn the LED off
  delay(1000); // Wait for 1 second
}
