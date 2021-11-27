const int ledPin_1 = 5; 
const int ledPin_2 = 6;
const int ledPin_3 = 11;
const int ledPin_4 = 10;
const int ledPin_5 = 9;
const int ledPin_6 = 3;

unsigned long next_time_1; 
unsigned long next_time_2; 
unsigned long next_time_3; 
unsigned long next_time_4; 
unsigned long next_time_5; 
unsigned long next_time_6;
unsigned long timeout_1 = 250000; 
unsigned long timeout_2 = 750000; 
unsigned long timeout_3 = 550000;
unsigned long timeout_4 = 250000;
unsigned long timeout_5 = 200000;
unsigned long timeout_6 = 250000;

int led_state_1 = 0; 
int led_state_2 = 0; 
int led_state_3 = 0;
int led_state_4 = 0;
int led_state_5 = 0;
int led_state_6 = 0;

void setup() {
  pinMode(ledPin_1, OUTPUT); 
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);
  pinMode(ledPin_4, OUTPUT);
  pinMode(ledPin_5, OUTPUT);
  pinMode(ledPin_6, OUTPUT);

  digitalWrite(ledPin_1, led_state_1); 
  digitalWrite(ledPin_2, led_state_2); 
  digitalWrite(ledPin_3, led_state_3);
  digitalWrite(ledPin_4, led_state_4);
  digitalWrite(ledPin_5, led_state_5);
  digitalWrite(ledPin_6, led_state_6);

  next_time_1 = micros() + timeout_1; 
  next_time_2 = micros() + timeout_2; 
  next_time_3 = micros() + timeout_3;
  next_time_4 = micros() + timeout_4;
  next_time_5 = micros() + timeout_5;
  next_time_6 = micros() + timeout_6;
}

void loop() {
  unsigned long now_time = micros(); 
  if (now_time >= next_time_1) { 
    next_time_1 = now_time + timeout_1; 
    led_state_1 = !led_state_1; 
    digitalWrite(ledPin_1, led_state_1); 
  }

  now_time = micros();
  if (now_time >= next_time_2) {
    next_time_2 = now_time + timeout_2;
    led_state_2 = !led_state_2;
    digitalWrite(ledPin_2, led_state_2);
  }

  now_time = micros();
  if (now_time >= next_time_3) {
    next_time_3 = now_time + timeout_3;
    led_state_3 = !led_state_3;
    digitalWrite(ledPin_3, led_state_3);
  }

  now_time = micros();
  if (now_time >= next_time_4) {
    next_time_4 = now_time + timeout_4;
    led_state_4 = !led_state_4;
    digitalWrite(ledPin_4, led_state_4);
  }

  now_time = micros();
  if (now_time >= next_time_5) {
    next_time_5 = now_time + timeout_5;
    led_state_5 = !led_state_5;
    digitalWrite(ledPin_5, led_state_5);
  }
now_time = micros();
  if (now_time >= next_time_6) {
    next_time_6 = now_time + timeout_6;
    led_state_6 = !led_state_6;
    digitalWrite(ledPin_6, led_state_6);
  }
}
