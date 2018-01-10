#include "SevSeg.h"
SevSeg Siebenseg; //Die Klasse des 7-Segment-Displays instanziieren
byte numDigits = 4; //Anzahl der Digit im Display 
byte digitPins[] = {2,3,4,5}; //gemeinsame Anschlüsse der Digits von links nach rechts
byte segmentPins[] = {6, 7, 8, 9, 10, 11, 12, 13}; // Segmentanschlüsse von a nach g und DP

unsigned long timer;   //Variable für Millisekunden
int ZehntelSekunden;
int Start_Stop = 14;  //Pin an dem der Start/Stop- Taster angeschlossen ist (analog 0)
int Null_setzen = 15; //Pin an dem der Null- Setztaster angeschlossen ist (analog 1)
bool Run = false;    //Variable, die anzeigt dass die Stoppuhr läuft


void setup() {
  Siebenseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins); //Initialisierung des Displays
  Siebenseg.setBrightness(60); //Möglichkeit des Dimmens - bis jetzt keine Änderung festzustellen
  pinMode(Start_Stop, INPUT);
  pinMode(Null_setzen, INPUT);
  ZehntelSekunden = 0;
  timer = millis();
}

void loop() {
  if (digitalRead(Start_Stop) == 0) {
    if (Run == false) {
      Run = true;
      timer = millis();
    }
    else {
      Run = false;
    }
  };
  
  if (digitalRead(Null_setzen) == 0) {
    if (Run == false) {
      ZehntelSekunden = 0;
      timer = millis();
    }
  };
  
  if ((millis() >= timer) && (Run == true)) {
    ZehntelSekunden++; // 100 Millisekunden sind eine Zehntelsekunde
    timer += 100; 
    if (ZehntelSekunden == 10000) { // Den Zähler nach 1000 Sekunden zurücksetzen
      ZehntelSekunden=0;
    }
    Siebenseg.setNumber(ZehntelSekunden, 1); //Zehntelsekunden darstellen mit dem Dezimalpunkt an der dritten Stelle
  }

  Siebenseg.setNumber(ZehntelSekunden, 1);
  Siebenseg.refreshDisplay(); //Immer das Display refreshen
}

/// END ///


