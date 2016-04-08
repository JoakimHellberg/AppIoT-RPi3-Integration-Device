# AppIoT-RPi3-Integration-Device
This is just a simple device using a DHT11 sensor that measures temperature and humidity.
The measurements are communicated on the serial port and written line by line.
Each Device have a hard coded serial number as a mac address e.g. 11:11:11:11:11:11. this needs to be unique within the device network.
In order to change serial number download Arduino IDE at https://www.arduino.cc/en/Main/Software

The sensor data is communicated over serial communication line by line with the following format

ID:11:11:11:11:11:11;TEMP: 13.0;

ID:11:11:11:11:11:11;HUM: 42;

Connecting the DHT-11 sensor with the Arduino Nano is done as described below:

Wiring details: https://github.com/JoakimHellberg/AppIoT-RPi3-Integration-Device/blob/master/Wiring.PNG

