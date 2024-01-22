#include <Arduino.h>
#include <MPU6050_tockn.h>
#include <Wire.h>

extern double anglex, angley, anglez; // angle in the x, y, z direction
extern double gyrox, gyroy, gyroz;    // angle rate in the x, y, z direction
extern double accx, accy, accz;       // acceleration in the x, y, z direction
// ================================================================
// Function Declaration
// ================================================================
void Init_MPU(void);      // Function to init the MPU6050
void Get_MPUangle(void);  // Function to get the angle from the MPU6050
void Get_MPUAcc(void);
void Get_MPUGyro(void); // Function to get the

