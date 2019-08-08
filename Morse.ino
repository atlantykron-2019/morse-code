#include "Morse.h"

Morse morse(13);
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
    Serial.println();    
    morse.letter(serialWord);
    delay(300);
  }
}
