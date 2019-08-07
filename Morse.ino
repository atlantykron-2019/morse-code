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
  morse.letter(key);

}
