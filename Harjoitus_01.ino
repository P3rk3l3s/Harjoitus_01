#define LEDON HIGH
#define LEDOFF LOW

int LED1= 7;
int LED2= 6;
int LED3= 5;
int LED4= 4;
int LED5= 3;
int timer = 50;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {
  digitalWrite(LED1, LEDOFF);
  delay(timer);
  digitalWrite(LED1, LEDON);
  delay(timer);
  digitalWrite(LED2, LEDOFF);
  delay(timer);
  digitalWrite(LED2, LEDON);
  delay(timer);
  digitalWrite(LED3, LEDOFF);
  delay(timer);
  digitalWrite(LED3, LEDON);
  delay(timer);
  digitalWrite(LED4, LEDOFF);
  delay(timer);
  digitalWrite(LED4, LEDON);
  delay(timer);
  digitalWrite(LED5, LEDOFF);
  delay(timer);
  digitalWrite(LED5, LEDON);
  delay(timer);
  digitalWrite(LED4, LEDOFF);
  delay(timer);
  digitalWrite(LED4, LEDON);
  delay(timer);
  digitalWrite(LED3, LEDOFF);
  delay(timer);
  digitalWrite(LED3, LEDON);
  delay(timer);
  digitalWrite(LED2, LEDOFF);
  delay(timer);
  digitalWrite(LED2, LEDON);
  delay(timer);
}
