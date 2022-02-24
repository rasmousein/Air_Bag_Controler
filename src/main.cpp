#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>


//imma built a fricking air bag controller
const byte PressureInputPin = 32;
int Pressure = 0 ;


void setup() {
  Serial.begin (115200);
  pinMode(PressureInputPin, INPUT);

}

void loop() {
  Pressure = analogRead(PressureInputPin);
  Serial.println (Pressure);
}