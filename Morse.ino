#include "Morse.h"

Morse morse(13);
int key=0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int state = 0;
  if (Serial.available() > 0)
  {
    key = Serial.read();
  }
  Serial.println(key);
switch (key) 
 {
    case 'a': morse.a(); break;
    case 'b': morse.b(); break;
    case 'c': morse.c(); break;
    case 'd': morse.d(); break;
    case 'e': morse.e(); break;
    case 'f': morse.f(); break;
    case 'g': morse.g(); break;
    case 'h': morse.h(); break;
    case 'i': morse.i(); break;
    case 'j': morse.j(); break;
    case 'k': morse.k(); break;
    case 'l': morse.l(); break;
    case 'm': morse.m(); break;
    case 'n': morse.n(); break;
    case 'u': morse.u(); break;
    case 'o': morse.o(); break;
    case 'p': morse.p(); break;
    case 'r': morse.r(); break;
    case 's': morse.s(); break;
    case 't': morse.t(); break;
    case 'w': morse.w(); break;
    case 'x': morse.x(); break;
    case 'y': morse.y(); break;
    case 'q': morse.q(); break;
    case 'z': morse.z(); break;
  
    case '1': morse.unul(); break;
    case '2': morse.doi(); break;
    case '3': morse.trei(); break;
    case '4': morse.patru(); break;
    case '5': morse.cinci(); break;
    case '6': morse.sase(); break;
    case '7': morse.sapte(); break;
    case '8': morse.opt(); break;
    case '9': morse.noua(); break;
    case '0': morse.zero(); break;
  
 }

/*
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
*/
 
}
