void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  multi_step(3);
}

int single_step(uint8_t delay_time) {
  digitalWrite(3, HIGH);
  delay(delay_time);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  delay(delay_time);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);
  delay(delay_time);
  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);
  delay(delay_time);
  digitalWrite(6, LOW);
}

int multi_step(uint8_t delay_time) {
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(delay_time);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(delay_time);
  digitalWrite(4, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(delay_time);
  digitalWrite(5, LOW);

  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  delay(delay_time);
  digitalWrite(6, LOW);
}
