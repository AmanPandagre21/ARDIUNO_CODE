#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);
int a=0;

void setup() {
  // set up the LCD's number of columns and rows:
   
  lcd.begin(16, 2);
  // Print a message to the LCD.
  
  lcd.print("Hello World!");
  pinMode(8,OUTPUT);
//digitalWrite(pin number,data);
digitalWrite(8,LOW);
 // delay(3000);
  // lcd.clear();
  
}

void loop() {

 
  lcd.setCursor(0,1);
  lcd.print(a);
  if(a%4==2||a%4==3){
    digitalWrite(8,HIGH);
  }
  else
  digitalWrite(8,LOW);
  delay(800);
  a++;

}
