#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
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

