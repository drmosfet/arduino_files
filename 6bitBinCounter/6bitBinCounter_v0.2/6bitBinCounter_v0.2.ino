int bit8=2;
int bit4=3;
int bit2=4;
int bit1=5;
int delayTime=100;

void setup() {
  // put your setup code here, to run once:
pinMode(bit1,OUTPUT);
pinMode(bit2,OUTPUT);
pinMode(bit4,OUTPUT);
pinMode(bit8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  number1();
  delay(delayTime);
  number2();
  delay(delayTime);
  number3();
  delay(delayTime);
  number4();
  delay(delayTime);
  number5();
  delay(delayTime);
  number6();
  delay(delayTime);
  number7();
  delay(delayTime);
  number8();
  delay(delayTime);
  number9();
  delay(delayTime);
  number10();
  delay(delayTime);
  number11();
  delay(delayTime);
  number12();
  delay(delayTime);
  number13();
  delay(delayTime);
  number14();
  delay(delayTime);
  number15();
  delay(delayTime);
}

void resetOutput(){
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,LOW);
}

int number1 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,LOW);
  return 1;
}

int number2 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,LOW);
  return 2;
}

int number3 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,LOW);
  return 3;
}

int number4 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,LOW);
  return 4;
}

int number5 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,LOW);
  return 5;
}

int number6 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,LOW);
  return 6;
}

int number7 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,LOW);
  return 7;
}

int number8 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,HIGH);
  return 8;
}

int number9 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,HIGH);
  return 9;
}

int number10 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,HIGH);
  return 10;
}

int number11 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,HIGH);
  return 11;
}

int number12 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,HIGH);
  return 12;
}

int number13 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,HIGH);
  return 13;
}

int number14 () {
  resetOutput();
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,HIGH);
  return 14;
}

int number15 () {
  resetOutput();
  digitalWrite(bit1,HIGH);
  digitalWrite(bit2,HIGH);
  digitalWrite(bit4,HIGH);
  digitalWrite(bit8,HIGH);
  return 15;
}
