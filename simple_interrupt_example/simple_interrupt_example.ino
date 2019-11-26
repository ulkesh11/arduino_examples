const byte ledPin = 13;
const byte interruptPin = 3;
const byte signalPin = 7;
volatile byte state = LOW;
volatile bool printFlag = false;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(signalPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blinkAndPrint, CHANGE);
}

void loop() {
  digitalWrite(ledPin, state);
  
  if (Serial.available() > 0) {
    char incoming = Serial.read();
    if (incoming == 'q') {
      digitalWrite(signalPin, HIGH);
    } else if (incoming == 'a') {
      digitalWrite(signalPin, LOW);
    }
  }

  if(printFlag){
    if (state){
      Serial.println("ext high");
    } else {
      Serial.println("ext low");
    }
    printFlag = false;
  }
}

void blinkAndPrint() {
  state = !state;
  printFlag = true;
}
