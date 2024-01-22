#include <Arduino.h>
#include<MPU.h>
#include <math.h>

void setup() {
  Serial.begin(9600);
  Init_MPU();
}

void loop() {
  Get_MPUangle();
  Serial.println(round(anglez));
  delay(180);
}