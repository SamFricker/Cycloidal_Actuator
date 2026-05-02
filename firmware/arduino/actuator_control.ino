int pwmPin = 9;
int dirPin = 8;
int enPin = 7;

void setup() {
  pinMode(pwmPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, HIGH);
}

void loop() {
  analogWrite(pwmPin, 128);
  digitalWrite(dirPin, HIGH);
  delay(2000);
  digitalWrite(dirPin, LOW);
  delay(2000);
}
