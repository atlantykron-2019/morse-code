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
delay(400);
morse.a();
delay(400);
morse.l();
delay(400);
morse.u();
delay(400);
morse.t();
delay(2000);
morse.m();
delay(400);
morse.i();
delay(400);
morse.h();
delay(400);
morse.a();
delay(400);
morse.i();
delay(2000);
morse.s();
delay(400);
morse.a();
delay(400);
morse.l();
delay(400);
morse.u();
delay(400);
morse.t();
delay(2000);
morse.y();
delay(400);
morse.p();
delay(400);
morse.unul();
delay(400);
morse.i();
delay(400);
morse.p();
delay(2000);
  
//  switch (key) {
//    case 'a': morse.a(); break;
//    case 'b': morse.b(); break;
//  }

}
