#include <MPU.h>
#include <math.h>


Adafruit_MPU6050 mpu;
double anglex, angley, anglez; // angle in the x, y, z direction
double gyrox, gyroy, gyroz;    // angle rate in the x, y, z direction
double accx, accy, accz;       // acceleration in the x, y, z direction

// ================================================================
// Setup function
// ================================================================
// ================================================================
void Init_MPU()
{
   // Try to initialize!
    if (!mpu.begin()) {
        Serial.println("Failed to find MPU6050 chip");
        while (1) {
          delay(10);
        }
    }
    Serial.println("MPU6050 Found!");
    // set accelerometer range to +-8G
    mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
    // set gyro range to +- 500 deg/s
    mpu.setGyroRange(MPU6050_RANGE_500_DEG);
    // set filter bandwidth to 21 Hz
    mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
    delay(100);
}

// ================================================================

// ================================================================
void Get_accelgyro()
{
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  gyrox = g.gyro.x;
  gyroy = g.gyro.y;
  gyroz = g.gyro.z;
  accx = a.acceleration.x;
  accy = a.acceleration.y;
  accz = a.acceleration.z;
}
