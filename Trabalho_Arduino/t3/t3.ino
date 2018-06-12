int ver = 4 ;
int amar = 3;
int verde = 2;
int chavedir = 6;
int nivchavedir;
int chaveesq = 7;
int nivchaveesq;
void setup() {
  // put your setup code here, to run once:
pinMode(verde, OUTPUT); //escreve
pinMode(chavedir, INPUT); //le
pinMode(chaveesq, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
nivchavedir = digitalRead(chavedir); //le chave direita e guarda na var nivchavedir;
nivchaveesq = digitalRead(chaveesq);
if(nivchavedir == HIGH && nivchaveesq == HIGH){ //se o nivchavedir está sempre ligada
  digitalWrite(verde, HIGH); // liga o pino 2 (verde)
  }
  else{
    digitalWrite(verde, LOW) ;
    //se  a chave n estiver high, mantém desligada;
  }
 
}
