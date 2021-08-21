int a=0;
void setup() {
pinMode(2,OUTPUT);
pinMode(3,INPUT);
digitalWrite(2,0);

}

void loop() {
  if(a!=digitalRead(3)){
    a=digitalRead(3);
    if(a==1){
      digitalWrite(2,!digitalRead(2));
    }
    
  }

}
