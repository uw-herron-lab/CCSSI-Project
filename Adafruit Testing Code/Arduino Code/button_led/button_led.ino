#define BUTTON 5

int btn = 0;

void setup() {
  Serial.begin(115200); 

  // Button (ADC) Testing
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // Button (ADC) Testing
  btn = digitalRead(BUTTON);
  if (btn == HIGH)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Button pressed: LED on!");
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("Button not pressed: LED off!");
  }
  delay(100);
}
