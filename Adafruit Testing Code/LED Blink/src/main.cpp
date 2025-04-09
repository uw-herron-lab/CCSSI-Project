#include <Arduino.h>

void setup() {
  Serial.begin(9600); 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Built-In LED Blinking Testing
  Serial.println("In-built LED On!");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  Serial.println("In-built LED Off!");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
