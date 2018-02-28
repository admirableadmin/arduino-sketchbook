
/*
Arduino Uno | LEDMatrix MAX7219
  pin 8    |   DIN (data in)
  pin 10    |   CLK (clock)
  pin 9    |   CS (load)
  VCC 5V    |   VCC
  GND       |   GND
*/

#include "LedControl.h"
LedControl lc=LedControl(8,10,9,1);

byte a[8]={B00000000,
           B01000110,
           B10000110,
           B10000000,
           B10000000,
           B10000110,
           B01000110,
           B00000000};

void setup() {
  for (int addr=0; addr<lc.getDeviceCount(); addr++){
    lc.shutdown(addr,false);
    lc.setIntensity(addr,addr);
    lc.clearDisplay(addr);
  }
}

void loop(){
  for (int row=0; row<8; row++){
    lc.setRow(0,row,a[row]);
  }
}
