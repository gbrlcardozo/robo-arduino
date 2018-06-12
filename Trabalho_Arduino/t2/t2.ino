int ver = 4 ;
int amar = 3;
int verde = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(ver, OUTPUT);
pinMode(amar, OUTPUT);
pinMode(verde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(verde, HIGH);
 delay(1000);
 digitalWrite(verde, LOW);
 delay(1000); 
 digitalWrite(amar, HIGH);
 delay(1000);
 digitalWrite(amar, LOW);
 delay(1000); 
 digitalWrite(ver, HIGH);
 delay(1000);
 digitalWrite(ver, LOW);
 delay(1000); 
}
