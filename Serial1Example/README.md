# Azure IoT DevKit Serial1 Example

This simple program shows how you can initialise and use the "second" serial port on the MXCHIP AZ3166 device.

The second serial port (known as Serial1) can be used to interact with devices that expose a serial connection, for example a GPS receiver. The "built in" serial port (Serial) is usually used to manage connections to the host device via the USB connection. 

 If you’re connecting the device using a MicroBit connector you will find that pin 1 is TXD and pin 2 is RXD.

 The program creates a second serial port and then transfers characters between Serial and Serial1. 

 You might get a compilation message about the code, but it builds and works fine.

 Rob Miles