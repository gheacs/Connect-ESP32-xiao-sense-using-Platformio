#include <Arduino.h>

// Make sure to use a valid analog pin for your board
#define ANALOG_PIN A0  // Change to your analog pin, for example, A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(ANALOG_PIN);

  // Assuming a 10-bit ADC and a reference voltage of 5V
  float voltage = (adcValue / 1023.0) * 5.0;

  Serial.print("Voltage: ");
  Serial.println(voltage, 3); // Print voltage with 3 decimal places

  delay(1000); // Read every second
}
