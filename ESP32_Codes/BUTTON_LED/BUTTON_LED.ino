// We assigned a name LED pin to pin number 2
const int LEDPIN = 2; 
// this will assign the name PushButton to pin numer 4
const int PushButton = 4;
// This Setup function is used to initialize everything 
void setup()
{
// This statement will declare pin 2 as digital output 
pinMode(LEDPIN, OUTPUT);
// This statement will declare pin 4 as digital input 
pinMode(PushButton, INPUT_PULLDOWN);
}

void loop()

{
// digitalRead function stores the Push button state 
// in variable push_button_state
int Push_button_state = digitalRead(PushButton);
// if condition checks if push button is pressed
// if pressed LED will turn on otherwise remain off 
if ( Push_button_state == HIGH )
{ 
digitalWrite(LEDPIN, HIGH); 
}
else 
{
digitalWrite(LEDPIN, LOW); 
}
}
