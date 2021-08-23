void setup() {
  pinMode(6,OUTPUT);
  digitalWrite(6,0);

}

void loop() {
  digitalWrite(6,0);
  delay(2000);
  digitalWrite(6,1);
  delay(2000);

}
