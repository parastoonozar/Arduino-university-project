void setup() {
    Serial.begin(9600);
    
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);

}

void loop() {

      if ((digitalRead(3) == 1)&&(digitalRead(4)==1))
      {
          analogWrite(10,120);      // Left
          analogWrite(11,120);      // Right
      }
      else if ((digitalRead(3) == 1))
      {
          analogWrite(10,120);      // Left
          analogWrite(11,50);      // Right
      }
      else if ((digitalRead(4) == 1))
      {
          analogWrite(10,50);      // Left
          analogWrite(11,120);      // Right
      }
      
      else if ((digitalRead(2) == 1))
      {
          analogWrite(10,120);      // Left
          analogWrite(11,0);      // Right
      }
      else if ((digitalRead(5) == 1))
      {
          analogWrite(10,0);      // Left
          analogWrite(11,120);      // Right
      }
      Serial.print(digitalRead(5));
      Serial.print(digitalRead(4));
      Serial.print(digitalRead(3));
      Serial.println(digitalRead(2));
}
