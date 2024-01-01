#define LED_Green     10
#define LED_Yellow    11
#define LED_Red       12

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_Yellow, OUTPUT);
  pinMode(LED_Red, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_Green, HIGH);
  digitalWrite(LED_Yellow, LOW);
  digitalWrite(LED_Red, LOW);
  delay(5000);                       // wait for a second
  digitalWrite(LED_Green, LOW);
  digitalWrite(LED_Yellow, HIGH);
  digitalWrite(LED_Red, LOW);
  delay(1000);
  digitalWrite(LED_Green, LOW);
  digitalWrite(LED_Yellow, LOW);
  digitalWrite(LED_Red, HIGH);
  delay(5000);
}
