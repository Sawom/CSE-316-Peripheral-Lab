#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
 lcd.begin(16, 2);
}
void loop(){
 lcd.print("hello, world!");
 delay(500);
 lcd.clear();
 delay(500);
 lcd.home();
 lcd.print("AAA");
 delay(500);
 lcd.clear();
 delay(500);
 lcd.setCursor(2, 1);
 lcd.print("hello, world!");
 delay(500);
 lcd.clear();
 delay(500);
 lcd.write("Hello Shawon");
 delay(500);
 lcd.setCursor(12, 1);
 lcd.cursor();
 delay(500);
 lcd.noCursor();
 delay(500);
 lcd.clear();
 delay(500);
 lcd.blink();
 delay(500);
 lcd.noBlink();
 delay(500);
 lcd.write("Hello Shawon");
 delay(500);
 lcd.display();
 delay(500);
 lcd.noDisplay();
 delay(500);
 lcd.scrollDisplayLeft();
 delay(1000);
 lcd.scrollDisplayRight();
 delay(1000);
}
