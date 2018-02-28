
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

void setup() {
  for (int addr=0; addr<lc.getDeviceCount(); addr++){
    lc.shutdown(addr,false);
    lc.setIntensity(addr,addr);
    lc.clearDisplay(addr);
  }
}

void loop(){
  // activate one by one LED
  for (int row=0; row<8; row++){
    for (int addr=0; addr<lc.getDeviceCount(); addr++){
      for (int col=0; col<8; col++){
        lc.setLed(addr,row,col,true);
        delay(10);
      }
    }
  }
  // deactivate one by one LED
  for (int row=0; row<8; row++){
    for (int addr=0; addr<lc.getDeviceCount(); addr++){
      for (int col=0; col<8; col++){
        lc.setLed(addr,row,col,false);
        //delay(10);
      }
    }
  }
}
