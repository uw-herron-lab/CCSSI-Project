#include <Arduino.h>

#define BUTTON 5

int btn = 0;

void setup() {
  Serial.begin(9600); 

  // Button (ADC) Testing
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  // Button (ADC) Testing
  btn = digitalRead(BUTTON);
  if (btn == HIGH)
  {
    // Using Input_Pullup
    // digitalWrite(LED_BUILTIN, HIGH);
    // Serial.println("Button pressed: LED on!");

    // Using Input
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("Button not pressed: LED off!");
  }
  else
  {
    // Using Input_Pullup
    // digitalWrite(LED_BUILTIN, LOW);
    // Serial.println("Button not pressed: LED off!");

    // Using Input
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Button pressed: LED on!");
  }
  delay(100);
}