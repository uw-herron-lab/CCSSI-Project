#include <Arduino.h>
// #include "eeg_data.h" // EEG Data preprocessed for use on this board using eeg_convert.py

// FUNCTIONS AND VARIABLES
const int eeg_out = 18; // GPIO18 -> A0
const int pwm_channel = 0; // PWM Channel
const int pwm_freq = 5000; // PWM Frequency, Hz
const int pwm_resolution = 9; // 8-bit resolution (0-255)
const int sample_rate = 200; // Change depending on sampling rate of data used


void setup() {
  Serial.begin(115200);
  ledcSetup(pwm_channel, pwm_freq, pwm_resolution);
  ledcAttachPin(eeg_out, pwm_channel);
  Serial.println("Starting...");
}

void loop() {
  // eeg_length and egg data from the imported file
  for (int i = 0; i < eeg_length; i++)
  {
    ledcWrite(pwm_channel, eeg_data[i]);
    delayMicroseconds(1000000 / sample_rate);
  }
}
