#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// LCD with I2C
// 0x27
// 0x3F
LiquidCrystal_PCF8574 lcd(0x3F);

void setup() {
  lcd.begin(16, 2);
  lcd.setBacklight(255);
}

void loop() {
  for (unsigned int hour = 12; hour < 24; hour++) {
    for (unsigned int minute = 0; minute < 60; minute++) {
      for (unsigned int second = 0; second < 60; second++) {
        String s = "";
        s += hour;
        s += ":";
        if (minute < 10)
          s += "0";
        s += minute;
        s += ":";
        if (second < 10)
          s += "0";
        s += second;
        lcd.clear();
        lcd.print(s);
        delay(1000);
      }
    }
  }
}

