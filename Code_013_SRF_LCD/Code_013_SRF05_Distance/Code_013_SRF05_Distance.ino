#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
long duration ;
int distance;

const int trig = 9;
const int echo = 10;

void setup() {
  pinMode(trig , OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  distance = calculateDistance();
  Serial.println(distance);
  lcd.setCursor(0, 0);
  lcd.print("distance= ");
  lcd.print(distance);
  delay(1000);
  lcd.clear();
}
int calculateDistance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  return distance;
}
