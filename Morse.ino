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

  
  switch (key) {
    case 'a': morse.a(); break;
    case 'b': morse.b(); break;
  }
 // morse.a();
}
