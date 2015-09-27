#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

uint8_t stepper_inputs[] = { IN1, IN2, IN3, IN4 };

void setup() {

  for ( int i = 0; i < 4; i++ ) {
    pinMode(stepper_inputs[i], OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  full_step(3);
}

int full_step(uint8_t delay_time) {
  
    digitalWrite(IN1, HIGH);
    delay(delay_time);
    digitalWrite(IN1, LOW);
  
    digitalWrite(IN2, HIGH);
    delay(delay_time);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, HIGH);
    delay(delay_time);
    digitalWrite(IN3, LOW);

    digitalWrite(IN4, HIGH);
    delay(delay_time);
    digitalWrite(IN4, LOW);
  
}

int half_step(uint8_t delay_time) {
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  delay(delay_time);
  digitalWrite(IN1, LOW);
  
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  delay(delay_time);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  delay(delay_time);
  digitalWrite(IN3, LOW);

  digitalWrite(IN4, HIGH);
  digitalWrite(IN1, HIGH);
  delay(delay_time);
  digitalWrite(IN4, LOW);
  
}
