#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 1 // Only one Adafruit Featherboard ESP32-S3

Adafruit_NeoPixel pixels(NUMPIXELS, PIN_NEOPIXEL, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);

  // #if defined(NEOPIXEL_POWER)
  //   // If this board has a power control pin, we must set it to output and high
  //   // in order to enable the NeoPixels. We put this in an #if defined so it can
  //   // be reused for other boards without compilation errors
  //   pinMode(NEOPIXEL_POWER, OUTPUT);
  //   digitalWrite(NEOPIXEL_POWER, HIGH);
  // #endif

  delay(2000); // Wait for Serial Monitor to connect
  Serial.println(" ");
  Serial.println(" ");
  Serial.println("Initializing NeoPixel...");
  pixels.begin();
  Serial.println("NeoPixel initialized!"); // Check if it's truly initialized
  Serial.println(" ");
  pixels.setBrightness(255); // not so bright

  // pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // Set to Red
  // pixels.show();
  // Serial.println("Red!!");
}

void loop() {
  // Neopixel LED Testing
  pixels.setPixelColor(0, pixels.Color(255, 0, 0)); // Red
  pixels.show();
  Serial.println("Neopixel LED on: Red!!");
  delay(500);

  pixels.setPixelColor(0, pixels.Color(0, 255, 0)); // Green
  pixels.show();
  Serial.println("Green!");
  delay(500);

  pixels.setPixelColor(0, pixels.Color(0, 0, 255)); // Blue
  pixels.show();
  Serial.println("Blue!");
  delay(500);
  
  pixels.setPixelColor(0, pixels.Color(0, 0, 0)); // Off
  pixels.show();
  Serial.println("Neopixel LED: Off!");
  delay(500);
}
