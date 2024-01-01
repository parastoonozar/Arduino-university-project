#include <TimerOne.h>
 int sec =0;
 int minut=0 ;
 int hour= 12;
void setup() 
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);     
  Timer1.initialize(1000000); 
  Timer1.attachInterrupt( timerIsr ); 
}
void loop()
{
  Serial.print("Time  ");
  Serial.print(hour);
  Serial.print(":");
  Serial.print(minut);
  Serial.print(":");
  Serial.println(sec);
}
 void timerIsr()
{
    digitalWrite( 13, digitalRead( 13 ) ^ 1 );
    sec ++ ;
    if (sec==60)
    {
      sec=0;
      minut ++ ;  
    }
    if (minut==60)
    {
      minut=0;
      hour ++ ;
      
    }
    if (hour==13)
    {
      hour =1 ; 
    }
}
