void setup() {
  Serial.begin(9600);

}

void loop() {
  float a=analogRead(A0);
  float b=(a*5)/1024;
  Serial.print(b);
  Serial.println(" volts");

}
