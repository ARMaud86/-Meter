#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define 

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
      // put your setup code here, to run once:
      lcd.begin();
      lcd.backlight();
      lcd.print(".");
      
}

void loop() {
  // put your main code here, to run repeatedly:

}
