int bit8=2;
int bit4=3;
int bit2=4;
int bit1=5;
int delayTime=100;
int a[10];
int i=0;
int j=0;
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

int calcBin(int inputNumber){
  //Serial.print("\n The setBits function is starting");
  //Serial.print("\n The inputNumber is: ");
  //Serial.print(inputNumber);
  //delay(1000);
  for(i=0;inputNumber>0; i++) {
   a[i] = inputNumber % 2;
   //Serial.print("\n a[");
   //Serial.print(i);
   //Serial.print("] = (inputNumber % 2) --> (");
   //Serial.print(inputNumber);
   //Serial.print(" % 2) = ");
   //Serial.print(a[i]);
   //Serial.print("\n inputNumber = (inputNumber / 2) --> (");
   //Serial.print(inputNumber);
   //Serial.print(" / 2) = ");
   inputNumber = inputNumber / 2;
   //Serial.print(inputNumber);
  }
  for(j = i - 1; j >= 0; j--)  {
    //Serial.print("\n i is: ");
    //Serial.print(i);
    //Serial.print(" ,and j is: ");
    //Serial.print(j);
    //Serial.print("\n and a[j] is a[");
    //Serial.print(j);
    //Serial.print("] is: ");
    //Serial.print(a[j]);
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
  //Serial.print("\nEnd of setBits function\n\n");
  return 0;
}
