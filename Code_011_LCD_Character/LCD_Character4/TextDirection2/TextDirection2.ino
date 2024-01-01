#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int str[] = {
  'S', 'a', 'n', 'd', 'w', 'i','c','h'
};
int i ;
void setup() {
  lcd.begin(16, 2);
//  lcd.cursor();
}
void loop() {
  lcd.home();
  lcd.clear();
  lcd.leftToRight();
  for(i=0;i<8;i++)
  {
    lcd.write(str[i]);delay(300);
  }
  lcd.clear();
  lcd.setCursor(7, 0);
  lcd.rightToLeft();
  for(i=8;i>0;i--)
  {
    lcd.write(str[i-1]);delay(300);
  }
}








