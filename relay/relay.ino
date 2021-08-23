void setup() {
pinMode(2,OUTPUT);
digitalWrite(2,0);

}

void loop() {
  digitalWrite(2,1);
  delay(2000);
  digitalWrite(2,0);
  delay(2000);
}
