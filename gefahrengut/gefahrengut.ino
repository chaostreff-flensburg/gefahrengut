void setup() {
  pinMode(D5, OUTPUT);
}

void loop() {
  int powerMode = ceil(random(0,101));
  digitalWrite(D5, HIGH);
  delay(random(500, 2000));
  if (powerMode == 100) {
    digitalWrite(D5, HIGH);
    delay(10000);
  };
  digitalWrite(D5, LOW);
  delay(random(500, 10000));
}
