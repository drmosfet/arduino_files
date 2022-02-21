const int BUTTON_PIN=8;
const int BIT6=7;
const int BIT5=6;
const int BIT4=2;
const int BIT3=3;
const int BIT2=4;
const int BIT1=5;

int delayTime=20;

int lastState = HIGH; // the previous state from the input pin
int currentState;  

int k=0;

void setup() {
  //Initiate Serial communication.
  Serial.begin(9600);
  for (int i=2;i<8;i++) {
    pinMode(i,OUTPUT);
  }
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.print("\n Start main Loop");
  currentState = digitalRead(BUTTON_PIN);
  if (lastState == LOW && currentState == HIGH) {
    Serial.println("The state changed from LOW to HIGH");
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
  resetOutput();
  }
  lastState = currentState;  
}

void resetOutput(){
  digitalWrite(BIT1,LOW);
  digitalWrite(BIT2,LOW);
  digitalWrite(BIT3,LOW);
  digitalWrite(BIT4,LOW);
  digitalWrite(BIT5,LOW);
  digitalWrite(BIT6,LOW);
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
        digitalWrite(BIT6,HIGH);
      }
    }
    if (j == 4) {
      if (a[j] == 1) {
        digitalWrite(BIT5,HIGH);
      }
    }
    if (j == 3) {
      if (a[j] == 1) {
        digitalWrite(BIT4,HIGH);
      }
    }
    if (j == 2) {
      if (a[j] == 1) {
        digitalWrite(BIT3,HIGH);
      }
    }
    if (j == 1) {
      if (a[j] == 1) {
        digitalWrite(BIT2,HIGH);
      }
    }
    if (j == 0) {
      if (a[j] == 1) {
        digitalWrite(BIT1,HIGH);
      }
    }
    //Serial.print(a[j]);
  }
}
