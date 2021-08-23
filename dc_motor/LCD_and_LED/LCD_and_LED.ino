#include <LiquidCrystal.h>
int i;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("AMAN");
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
}

void loop() {
  
  for(i=0 ;i<10;i++){
    lcd.setCursor(0,1);
    lcd.print(i);
    if(i%2==0){
      digitalWrite(8,HIGH);  
      }
      else {
        digitalWrite(8,LOW);
      }
      delay(700);
  }
   
}
