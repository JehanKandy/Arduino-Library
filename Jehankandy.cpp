#include "Jehankandy.h"
#include "Arduino.h"

 Jehankandy::Jehankandy (int led1,int led2, int led3,int led4,int led5,int led6,int led7,int led8,int led9,int led10){

  diode1=led1;
  diode2=led2;
  diode3=led3;
  diode4=led4;
  diode5=led5;
  diode6=led6;
  diode7=led7;
  diode8=led8;
  diode9=led9;
  diode10=led10;

}

void Jehankandy::PinSetup() {
  pinMode(diode1,OUTPUT);
  pinMode(diode2,OUTPUT);
  pinMode(diode3,OUTPUT);
  pinMode(diode4,OUTPUT);
  pinMode(diode5,OUTPUT);
  pinMode(diode6,OUTPUT);
  pinMode(diode7,OUTPUT);
  pinMode(diode8,OUTPUT);
  pinMode(diode9,OUTPUT);
  pinMode(diode10,OUTPUT);

}

void Jehankandy::pat1()
{

  digitalWrite(diode1, HIGH);
  delay(250);
  digitalWrite(diode2, HIGH);
  delay(250);
  digitalWrite(diode3, HIGH);
  delay(250);
  digitalWrite(diode4, HIGH);
  delay(250);
  digitalWrite(diode5, HIGH);
  delay(250);
  digitalWrite(diode6, HIGH);
  delay(250);
  digitalWrite(diode7, HIGH);
  delay(250);
  digitalWrite(diode8, HIGH);
  delay(250);
  digitalWrite(diode9, HIGH);
  delay(250);
  digitalWrite(diode10, HIGH);
  delay(250);

  // turn all the LEDs off:
  digitalWrite(diode10, LOW);
  delay(250);
  digitalWrite(diode9, LOW);
  delay(250);
  digitalWrite(diode8, LOW);
 delay(250);
  digitalWrite(diode7, LOW);
  delay(250);
  digitalWrite(diode6, LOW);
  delay(250);
  digitalWrite(diode5, LOW);
  delay(250);
  digitalWrite(diode4, LOW);
  delay(250);
  digitalWrite(diode3, LOW);
  delay(250);
  digitalWrite(diode2, LOW);
  delay(250);
  digitalWrite(diode1, LOW);
  delay(250);
}

void Jehankandy:: pat2(){

  digitalWrite(diode1, HIGH);
  digitalWrite(diode2, HIGH);
  digitalWrite(diode3, HIGH);
  digitalWrite(diode4, HIGH);
  digitalWrite(diode5, HIGH);
  digitalWrite(diode6, HIGH);
  digitalWrite(diode7, HIGH);
  digitalWrite(diode8, HIGH);
  digitalWrite(diode9, HIGH);
  digitalWrite(diode10, HIGH);


 delay(1000);
  digitalWrite(diode10, LOW);
  digitalWrite(diode9, LOW);
  digitalWrite(diode8, LOW);
  digitalWrite(diode7, LOW);
  digitalWrite(diode6, LOW);
  digitalWrite(diode5, LOW);
  digitalWrite(diode4, LOW);
  digitalWrite(diode3, LOW);
  digitalWrite(diode2, LOW);
  digitalWrite(diode1, LOW);
  delay(1000);
}

void Jehankandy::pat3() {
  digitalWrite(diode1, HIGH);
  delay(250);
  digitalWrite(diode1, LOW);
   delay(250);
  digitalWrite(diode2, HIGH);
   delay(250);
   digitalWrite(diode2, LOW);
   delay(250);
  digitalWrite(diode3, HIGH);
   delay(250);
   digitalWrite(diode3, LOW);
   delay(250);
  digitalWrite(diode4, HIGH);
  delay(250);
  digitalWrite(diode4, LOW);
  delay(250);
  digitalWrite(diode5, HIGH);
  delay(250);
  digitalWrite(diode5, LOW);
  delay(250);
  digitalWrite(diode6, HIGH);
  delay(250);
  digitalWrite(diode6, LOW);
  delay(250);
  digitalWrite(diode7, HIGH);
  delay(250);
  digitalWrite(diode7, LOW);
  delay(250);
  digitalWrite(diode8, HIGH);
  delay(250);
  digitalWrite(diode8, LOW);
  delay(250);
  digitalWrite(diode9, HIGH);
  delay(250);
  digitalWrite(diode9, LOW);
  delay(250);
  digitalWrite(diode10, HIGH);
  delay(250);
  digitalWrite(diode10, LOW);
  delay(250);
}

void Jehankandy::pat4(){
  digitalWrite(diode5, HIGH);
  digitalWrite(diode6, HIGH);
  delay(250);
  digitalWrite(diode4, HIGH);
  digitalWrite(diode7, HIGH);
  delay(250);
  digitalWrite(diode3, HIGH);
  digitalWrite(diode8, HIGH);
  delay(250);
  digitalWrite(diode2, HIGH);
  digitalWrite(diode9, HIGH);
  delay(250);
  digitalWrite(diode1, HIGH);
  digitalWrite(diode10, HIGH);
  delay(250);

  digitalWrite(diode1, LOW);
  digitalWrite(diode10, LOW);
  delay(250);
  digitalWrite(diode2, LOW);
  digitalWrite(diode9, LOW);
  delay(250);
  digitalWrite(diode3, LOW);
  digitalWrite(diode8, LOW);
  delay(250);
  digitalWrite(diode4, LOW);
  digitalWrite(diode7, LOW);
  delay(250);
  digitalWrite(diode5, LOW);
  digitalWrite(diode6, LOW);
  delay(250);

}
void Jehankandy::pat5() {

  digitalWrite(diode1,HIGH);
  digitalWrite(diode3,HIGH);
  digitalWrite(diode5,HIGH);
  digitalWrite(diode7,HIGH);
  digitalWrite(diode9,HIGH);

  delay(250);

  digitalWrite(diode1,LOW);
  digitalWrite(diode3,LOW);
  digitalWrite(diode5,LOW);
  digitalWrite(diode7,LOW);
  digitalWrite(diode9,LOW);

  digitalWrite(diode2,HIGH);
  digitalWrite(diode4,HIGH);
  digitalWrite(diode6,HIGH);
  digitalWrite(diode8,HIGH);
  digitalWrite(diode10,HIGH);

  delay(250);

  digitalWrite(diode2,LOW);
  digitalWrite(diode4,LOW);
  digitalWrite(diode6,LOW);
  digitalWrite(diode8,LOW);
  digitalWrite(diode10,LOW);

}
