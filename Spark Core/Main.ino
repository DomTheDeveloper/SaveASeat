int motor = D0;

void setup() {
  pinMode(motor, OUTPUT);
  digitalWrite(motor, HIGH);

  delay(5000);
  digitalWrite(motor, LOW);
}

void loop() {

}
