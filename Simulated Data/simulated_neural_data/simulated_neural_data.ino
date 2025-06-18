#define EEG_OUT 9

// CONSTANTS AND FUNCTIONS
const int sample_rate = 200; // Change to sample_rate of dataset used.


void setup() {
  Serial.begin(9600);
  pinMode(EEG_OUT, OUTPUT);

}

void loop() {
  

}
