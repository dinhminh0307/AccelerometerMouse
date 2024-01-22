import serial
import pyautogui

arduino = serial.Serial('COM6', 9600)  # Replace with your port
while True:
    if arduino.inWaiting() > 0:
        data = arduino.readline().decode('utf-8').rstrip()
        acc_x, acc_y, acc_z = map(float, data.split(','))

        # Convert or map accelerometer data to mouse movement. This will require
        # some experimentation to get right.
        # Example: move mouse in proportion to acc_x and acc_y
        
