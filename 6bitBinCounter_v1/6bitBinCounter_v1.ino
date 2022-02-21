int bit6=7;
int bit5=6;
int bit4=2;
int bit3=3;
int bit2=4;
int bit1=5;
int delayTime=20;

void setup() {
  //Initiate Serial communication.
  Serial.begin(9600);
  for (int i=2;i<8;i++) {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("Start main Loop");
  for(int k=0;k<64;k++) {
    resetOutput();
    calcBin(k);
    delay(delayTime);
  }
  for(int k=62;k>0;k--) {
    resetOutput();
    calcBin(k);
    delay(delayTime);
  }
  blink(10);
}

void resetOutput(){
  digitalWrite(bit1,LOW);
  digitalWrite(bit2,LOW);
  digitalWrite(bit3,LOW);
  digitalWrite(bit4,LOW);
  digitalWrite(bit5,LOW);
  digitalWrite(bit6,LOW);
}

void allOff() {
    resetOutput();
}
void allOn(){
    calcBin(63);
}

void blink(int times) {
  for (int t=times;t>0;t--) {
    allOff();
    delay(delayTime*3);
    allOn();
    delay(delayTime*6);
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
    if (j == 5) {
      if (a[j] == 1) {
        digitalWrite(bit6,HIGH);
      }
    }
    if (j == 4) {
      if (a[j] == 1) {
        digitalWrite(bit5,HIGH);
      }
    }
    if (j == 3) {
      if (a[j] == 1) {
        digitalWrite(bit4,HIGH);
      }
    }
    if (j == 2) {
      if (a[j] == 1) {
        digitalWrite(bit3,HIGH);
      }
    }
    if (j == 1) {
      if (a[j] == 1) {
        digitalWrite(bit2,HIGH);
      }
    }
    if (j == 0) {
      if (a[j] == 1) {
        digitalWrite(bit1,HIGH);
      }
    }
    //Serial.print(a[j]);
  }
}
