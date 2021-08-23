void setup() {
  pinMode(1,OUTPUT);
  digitalWrite(1,0);
pinMode(8,INPUT);
}

void loop() {
  int a=digitalRead(8);
  if(a==1)
  {
  digitalWrite(1,!(digitalRead(1)));
  delay(1000);
  }
  
 
}
