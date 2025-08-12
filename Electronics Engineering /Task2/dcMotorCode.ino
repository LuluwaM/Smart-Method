/* Task 2 part 1 
     Turn on the dc motor 
*/
////define variables
int dcMotor=2;
void setup()
{
  // initialize the dcMotor pin as an output:
  pinMode(dcMotor, OUTPUT);
}

void loop()
{
  // turn on dc motor
  digitalWrite(dcMotor, HIGH); 
  delay(5000); // Wait for 5000 millisecond(s)
  //turn off dc motor 
  digitalWrite(dcMotor, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}