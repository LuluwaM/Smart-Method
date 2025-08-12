//library to communicate with other devices
#include <Wire.h>

//define variables
int pushButton = A0;
int x = 0;

void setup()
{
  Wire.begin();
  // initialize the pushButton pin as an input:
  pinMode(pushButton, INPUT);
}

void loop()
{
  //transmission to the I2C device 
   Wire.beginTransmission(1);
  //read the state of the button 
   x = digitalRead(pushButton);
  // sends data to another device
   Wire.write(x);
  //Ends a transmission
   Wire.endTransmission();
   delay(500);
}
