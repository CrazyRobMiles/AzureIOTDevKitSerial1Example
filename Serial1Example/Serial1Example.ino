#include "Arduino.h"

UARTClass Serial1(UART_1);

void setup() {
  Serial.begin(115200);
  Serial1.begin(115200);
  Serial.println("Serial port demo program starting");
  Serial.println("Characters will be copied between the two serial ports");
  Serial.println("Each character will have 1 added to the code when it is copied.");
}

void loop() {
  while(Serial1.available())
    Serial.write(Serial1.read()+1);
  while(Serial.available())
    Serial1.write(Serial.read()+1);
}
