#include<Servo.h>

int ver = 4 ;
int amar = 3;
int verde = 2;
int chavedir = 6;
int nivchavedir;
int motesq = 9;
int motdir = 8;
int chaveesq = 7;
int nivchaveesq;

Servo servoEsq; //classe e obj
Servo servoDir; // classe e obj

void setup() {
// put your setup code here, to run once:
 servoDir.attach(motdir);

 servoEsq.attach(motesq);

 pinMode(chaveesq, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  nivchaveesq = digitalRead(chaveesq);
  nivchavedir = digitalRead(chavedir);
  if(chaveesq == HIGH){
      servoDir.writeMicroseconds(2100);
      servoEsq.writeMicroseconds(900);
  }else{
  servoDir.writeMicroseconds(1500);
  servoEsq.writeMicroseconds(1500);
  delay(1000);
  servoDir.writeMicroseconds(900);
  servoEsq.writeMicroseconds(2100);
  delay(2000);
  }
  if(chavedir == HIGH){
   servoDir.writeMicroseconds(2100);
   servoEsq.writeMicroseconds(900);
  }else{
  servoDir.writeMicroseconds(900);
  servoEsq.writeMicroseconds(2100);
  delay(1000);
  servoDir.writeMicroseconds(2100);
  servoEsq.writeMicroseconds(2100);
  delay(2000);
  }
}
