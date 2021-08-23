void setup() {
 pinMode(7,OUTPUT);
 digitalWrite(7,0);

}

void loop() {
 digitalWrite(7,1);
 delay(500);
 digitalWrite(7,0);
 delay(500);
}
