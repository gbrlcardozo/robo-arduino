#include<Servo.h>

int ver = 4 ;
int amar = 3;
int verde = 2;
int chavedir = 6;
int nivchavedir;
int motesq = 9;
int motdir = 8;

Servo servoEsq; //classe e obj
Servo servoDir; // classe e obj

void setup() {
// put your setup code here, to run once:
 servoDir.attach(motdir);

  servoEsq.attach(motesq);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoDir.writeMicroseconds(2100);
  servoEsq.writeMicroseconds(900);
  delay(2000);
  servoDir.writeMicroseconds(1500);
  servoEsq.writeMicroseconds(1500);
  delay(2000);
  
}
