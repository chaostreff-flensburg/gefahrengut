void setup() {
  delay(1000); // 1 second delay for recovery
  pinMode(D5, OUTPUT);
}

void loop() {
  int powerMode = ceil(random(50,101));
  digitalWrite(D5, HIGH);
  delay(random(500, 2000));
  if (powerMode == 100) {
    digitalWrite(D5, HIGH);
    delay(10000);
  };
  digitalWrite(D5, LOW);
  delay(random(500, 10000));
}
