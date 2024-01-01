
const int analogInPin = A0;
float AValue = 0;
float AValue2 = 0;
void setup() {

  Serial.begin(9600);
}

void loop() {
  //AValue = map(analogRead(analogInPin), 0, 1023, 0, 5);
  AValue = analogRead(analogInPin) * 0.0048828125 ; //((float)(5/1024));
  AValue2 = analogRead(analogInPin) * 0.48828125 ; //((float)(5/1024));
  Serial.print("Voltage = ");
  Serial.print(AValue);
  Serial.print("  Temp = ");
  Serial.println(AValue2);
  delay(100);
}
