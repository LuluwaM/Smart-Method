//library to communicate with other devices
#include <Wire.h>
//define variables
int Led=13;
int x =0;

void setup()
{
  Wire.begin(1);
  Wire.onReceive(receiveEvent); 
  // initialize the LED pin as an output:
  pinMode(pinLed, OUTPUT);
}
void loop()
{
  delay(100);
}
void receiveEvent(int howMany)
{
   x = Wire.read();
   //check condition
   if (x == 1){
    digitalWrite(pinLed,HIGH);
  }
  else{ 
   digitalWrite(pinLed,LOW);
  }
}