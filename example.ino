//............................JEHANKANDY..........................................
//......................DEVELOP BY : JEHANKANDY...................................
//..................LIBRARY FOR ARDUINO LED PATTERNS..............................

//................http://www.jehankandy.com.......................................

#include <Jehankandy.h>

Jehankandy jehan(2,3,4,5,6,7,8,9,10,11);
void setup() {
  jehan.PinSetup();
}

void loop() {
  jehan.pat1();
  jehan.pat2();
  jehan.pat3();
  jehan.pat4();
  jehan.pat5();
   
}

//....................thank you for downloading my library..................
//............................JEHANKANDY....................................
