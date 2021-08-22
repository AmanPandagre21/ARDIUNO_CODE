#include<LiquidCrystal.h>
LiquidCrystal lcd(0,1,2,3,4,5);
int i=0,a=0;
void setup() {
  pinMode(13,INPUT);
  pinMode(12,OUTPUT);
  lcd.begin(16,2);
  lcd.print("Idrak,press btn.");
  lcd.setCursor(0,1);
  lcd.print(i);
}
void loop() {
  
  if(a!=digitalRead(13))
  {
    lcd.setCursor(0,1);
  a=digitalRead(13);
  if(a==1)
  {
    i++;
    if(i%2!=0)
    {
      digitalWrite(12,1);
    }
    
    else{
      digitalWrite(12,0);
    }
    lcd.print(i);
  } 
  }
  
  


}
