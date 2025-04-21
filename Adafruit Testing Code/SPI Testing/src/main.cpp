#include <Arduino.h>
#include <SPI.h>

#define CS_PIN 9

void setup() {
  Serial.begin(9600);
  SPI.begin(SCK, MISO, MOSI, CS_PIN);
  pinMode(CS_PIN, OUTPUT);
  digitalWrite(CS_PIN, HIGH);

  Serial.println("SPI loopback test started.");
}

void loop() {
  byte out = 0xA5;
  byte in = 0;

  digitalWrite(CS_PIN, LOW);
  in = SPI.transfer(out);
  digitalWrite(CS_PIN, HIGH);

  Serial.print("Sent: 0x");
  Serial.print(out, HEX);
  Serial.print(" | Received: 0x");
  Serial.println(in, HEX);

  delay(1000);
}
