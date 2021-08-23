
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(2,3,4,5,6,7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.setCursor(15,0);
  lcd.print("idrak");
  
  
}

void loop() {
  lcd.setCursor(15,0);
  for(int i=0;i<13;i++)
  {
  lcd.scrollDisplayLeft();
  delay(500);
  }
  
}

