#ifndef Jehankandy_h
#define Jehankandy_h
#include "Arduino.h"

class Jehankandy {

private:
    int diode1;
    int diode2;
    int diode3;
    int diode4;
    int diode5;
    int diode6;
    int diode7;
    int diode8;
    int diode9;
    int diode10;






public:

    Jehankandy(int led1, int led2, int led3, int led4,int led5,int led6,int led7,int led8,int led9,int led10);
    void PinSetup();
    void pat1();
    void pat2();
    void pat3();
    void pat4();
    void pat5();







};




#endif
