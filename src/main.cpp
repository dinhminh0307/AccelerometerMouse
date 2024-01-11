#include <Arduino.h>
#include<MPU.h>


void setup() {
  Serial.begin(9600);
  // Init_MPU();
  Serial.println("Please work");
}

void loop() {
  Get_accelgyro();
  Serial.print(accx);
  Serial.print(" ");
  Serial.println(accy);
  // int x = map(accx, 1, 1023, 1917, 2);
  // int y = map(accy, 1, 1023, 2, 1077);
  

  // Serial.print(" ");
  // Serial.print(x);
  // Serial.print(" ");
  // Serial.print(y);
  // Serial.print(" ");
  // Serial.println("m");
  delay(180);
}