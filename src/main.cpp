#include <Arduino.h>
#include<MPU.h>


void setup() {
  Serial.begin(9600);
  Init_MPU();
}

void loop() {
  Get_MPUangle();
  Serial.println(anglez);
  delay(180);
}