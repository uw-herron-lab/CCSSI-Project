void setup() {
  Serial.begin(115200); 

  // Built-In LED Blinking Testing
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Connection Testing
  // Serial.println("IT FUCKING WORKS!!!");

  // Built-In LED Blinking Testing
  Serial.println("In-built LED On!");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  Serial.println("In-built LED Off!");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
