void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}
char i ;
void loop() {
  // put your main code here, to run repeatedly:
    if( digitalRead(7))
    {
      digitalWrite(13,LOW);
    }
    else
    {
      digitalWrite(13,HIGH);
    }
}
