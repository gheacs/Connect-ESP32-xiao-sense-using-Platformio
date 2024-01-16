#include <Arduino.h>

#define ANALOG_PIN 34  // Change to your analog pin

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(ANALOG_PIN);
  float voltage = (adcValue / 4095.0) * 3.3;

  Serial.print("Voltage: ");
  Serial.println(voltage);

  delay(1000); // Read every second
}
