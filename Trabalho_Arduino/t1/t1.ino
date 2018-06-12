int ver = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(ver, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ver, HIGH);
 delay(1000);
 digitalWrite(ver, LOW);
 delay(1000); 
}
