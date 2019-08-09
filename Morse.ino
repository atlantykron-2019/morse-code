#include "Morse.h"

Morse morse(13);
int serialWord = 0;
String printMe = "Hello World";

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  if (! (Serial.available() > 0) ) {
    return;
  }

  morse.phrase(printMe.toLowerCase());
}
