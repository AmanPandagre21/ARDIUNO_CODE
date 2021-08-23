void setup() {
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
digitalWrite(0,0);
digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,0);
}

void loop() {
  digitalWrite(0,1);
  digitalWrite(1,0);
  digitalWrite(2,1);
  digitalWrite(3,0);
 delay(3000);
 digitalWrite(0,0);
  digitalWrite(1,1);
  digitalWrite(2,0);
  digitalWrite(3,1);
  delay(3000);
}
