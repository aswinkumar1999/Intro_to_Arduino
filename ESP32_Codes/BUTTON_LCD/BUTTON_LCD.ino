#include <LiquidCrystal_I2C.h>

// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;

// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

// this will assign the name PushButton to pin numer 15
const int PushButton = 4;
// This Setup function is used to initialize everything 
void setup()
{
// This statement will declare pin 22 as digital output 
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
// This statement will declare pin 15 as digital input 
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
  lcd.clear();
lcd.setCursor(0, 0);
  // print message
  lcd.print("Hello, LCD!");
  delay(1000); 
}
else 
{
lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(0,1);
  lcd.print("Hello, LCD!");
}
}
