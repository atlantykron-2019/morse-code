#include "Morse.h"

Morse morse(13);
int key;

void setup()
{
}

void loop()
{
  morse.dot();
  key = Serial.read();

  //morse.write(key);
morse.s();
morse.a();
morse.l();
morse.u();
morse.t();
delay(700);
morse.m();
morse.i();
morse.h();
morse.a();
morse.i();
delay(700);
morse.s();
morse.a();
morse.l();
morse.u();
morse.t();
delay(700);
morse.y();
morse.p();
morse.unul();
morse.i();
morse.p();

  
//  switch (key) {
//    case 'a': morse.a(); break;
//    case 'b': morse.b(); break;
//  }

}
