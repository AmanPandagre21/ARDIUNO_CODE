#include<Servo.h>
Servo myservo;
int pos=0,a=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  myservo.attach(7);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(a!=digitalRead(8)){
    a=digitalRead(8);
    if(a==1){
      myservo.write(pos);
        if(pos==0){
          pos=90;
          }
        else if(pos==90){
          pos=180;
          }
        else if(pos==180){
          pos=0;
          }  
      
      }
    }

}
