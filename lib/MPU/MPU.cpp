#include <MPU.h>

MPU6050 mpu6050(Wire);

double anglex, angley, anglez; // angle in the x, y, z direction
double gyrox, gyroy, gyroz;    // angle rate in the x, y, z direction
double accx, accy, accz;       // acceleration in the x, y, z direction

void Init_MPU(void) {
  Serial.begin(9600);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
}

void Get_MPUangle(void) {
  mpu6050.update();
  anglex = mpu6050.getAngleX();
  angley = mpu6050.getAngleY();
  anglez = mpu6050.getAngleZ();
}

void Get_MPUAcc(void) {
  mpu6050.update();
  accx = mpu6050.getAccX();
  accy = mpu6050.getAccY();
  accz = mpu6050.getAccZ();
}

void Get_MPUGyro(void) {
  mpu6050.update();
  gyrox = mpu6050.getGyroX();
  gyroy = mpu6050.getGyroY();
  gyroz = mpu6050.getGyroZ();
}