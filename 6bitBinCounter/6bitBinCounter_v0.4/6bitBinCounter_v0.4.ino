int bit8=2;
int bit4=3;
int bit2=4;
int bit1=5;
int delayTime=100;
int k=0;

void setup() {
  // put your setup code here, to run once:
  //Initiate Serial communication.
  Serial.begin(9600);
pinMode(bit1,OUTPUT);
pinMode(bit2,OUTPUT);
pinMode(bit4,OUTPUT);
pinMode(bit8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(k=0;k<16;k++) {
    resetOutput();
    calcBin(k);
    delay(1000);
  }
}

void resetOutput(){
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,LOW);
  digitalWrite(bit4,LOW);
  digitalWrite(bit8,LOW);
}

void setBit(int bitNum){
  if (bitNum == 8) {
     digitalWrite(bit8,HIGH);
  }
  if (bitNum == 4) {
     digitalWrite(bit4,HIGH);
  }
  if (bitNum == 2) {
     digitalWrite(bit2,HIGH);
  }
  if (bitNum == 1) {
     digitalWrite(bit1,HIGH);
  }
}

void calcBin(int inputNumber){
  int a[10];
  int i=0;
  int j=0;
  for(i=0;inputNumber>0; i++) {
   a[i] = inputNumber % 2;
   inputNumber = inputNumber / 2;
  }
  for(j = i - 1; j >= 0; j--)  {
    if (j == 3) {
      if (a[j] == 1) {
        setBit(8);
      }
    }
    if (j == 2) {
      if (a[j] == 1) {
        setBit(4);
      }
    }
    if (j == 1) {
      if (a[j] == 1) {
        setBit(2);
      }
    }
    if (j == 0) {
      if (a[j] == 1) {
        setBit(1);
      }
    }
  }
}
