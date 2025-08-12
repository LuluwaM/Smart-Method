/*
Turn on the light using the push of a button

*/

//define variables
int LED=12; //the number of the LIGHT pin
int BUTTON=2;  //the number of the button pin
int buttonState = 0; //variable for reading the pushbutton status

void setup()
{
 // initialize the LED pin as an output:
  pinMode(LED, OUTPUT);
  // initialize the button pin as an input:
  pinMode(BUTTON, INPUT);
}
void loop(){
  // read the state of the button 
  buttonState = digitalRead(BUTTON);
  //check condition
  if (buttonState==HIGH ){
    //turn LED on
     digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);
  }
}
