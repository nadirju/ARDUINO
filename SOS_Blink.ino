int builtinLED = 13;

void setup() {
 pinMode(builtinLED, OUTPUT);
}

void loop() {
  digitalWrite(builtinLED, HIGH);
  delay(500);
  digitalWrite(builtinLED, LOW);
  delay(500);
  digitalWrite(builtinLED, HIGH);
  delay(500);
  digitalWrite(builtinLED, LOW);
  delay(500);
  digitalWrite(builtinLED, HIGH);
  delay(500);
  digitalWrite(builtinLED,LOW);
  delay(1000);
  digitalWrite(builtinLED, HIGH);
  delay(1000);
  digitalWrite(builtinLED, LOW);
  delay(1000);
  digitalWrite(builtinLED, HIGH);
  delay(1000);
  digitalWrite(builtinLED, LOW);
  delay(1000);digitalWrite(builtinLED, HIGH);
  delay(1000);
  digitalWrite(builtinLED, LOW);
  delay(2000);
}
