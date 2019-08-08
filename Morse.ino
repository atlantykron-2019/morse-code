#include "Morse.h"

Morse morse(13);
int key = 0;
int serialWord = 0;

void setup()
{
  Serial.begin(9600);

}

void loop()
{

  if (Serial.available() > 0)
  {
    serialWord = Serial.read();
    Serial.println(char(serialWord));
    Serial.println();    // End the line
    morse.letter(serialWord);
    delay(300);
  }
}
