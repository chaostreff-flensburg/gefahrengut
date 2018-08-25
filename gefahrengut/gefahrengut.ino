void setup() {
  pinMode(D5, OUTPUT);
}

int timer = 1000;

void loop() {
  digitalWrite(D5, HIGH);
  delay(random(500, 2000));
  digitalWrite(D5, LOW);
  delay(random(5000, 10000));
}
