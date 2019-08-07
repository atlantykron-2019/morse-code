#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}


void Morse::a()
{
  this->dot();
  this->dash();
}

void Morse::b()
{
  this->dash();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::c()
{
  this->dash();
  this->dot();
  this->dash();
  this->dot();
}

void Morse::d()
{
  this->dash();
  this->dot();
  this->dot();
}

void Morse::e()
{
  this->dot();
}

void Morse::f()
{
  this->dot();
  this->dot();
  this->dash();
  this->dot();
}

void Morse::g()
{
  this->dash();
  this->dash();
  this->dot();
}

void Morse::h()
{
  this->dot();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::i()
{
  this->dot();
  this->dot();
}

void Morse::j()
{
  this->dot();
  this->dash();
  this->dash();
  this->dash();
}

void Morse::k()
{
  this->dash();
  this->dot();
  this->dash();
}

void Morse::l()
{
  this->dot();
  this->dash();
  this->dot();
  this->dot();
}

void Morse::m()
{
  this->dash();
  this->dash();
}

void Morse::n()
{
  this->dash();
  this->dot();
}

void Morse::o()
{
  
  this->dash();
  this->dash();
  this->dash();
}

void Morse::p()
{
  this->dot();
  this->dash();
  this->dash();
  this->dot();
}

void Morse::q()
{
  this->dash();
  this->dash();
  this->dot();
  this->dash();
}

void Morse::r()
{
  this->dot();
  this->dash();
  this->dot();
}

void Morse::s()
{
  this->dot();
  this->dot();
  this->dot();
}

void Morse::t()
{
  this->dash();
}

void Morse::u(){
  this->dot();
  this->dot();
  this->dash();
}

void Morse::v(){
  this->dot();
  this->dot();
  this->dot();
  this->dash();
}

void Morse::w(){
  this->dot();
  this->dash();
  this->dash();
}

void Morse::x(){
  this->dash();
  this->dot();
  this->dot();
  this->dash();
}

void Morse::y(){
  this->dash();
  this->dot();
  this->dash();
  this->dash();
}

void Morse::z(){
  this->dash();
  this->dash();
  this->dot();
  this->dot();
}

void Morse::unul(){
  this->dot();
  this->dash();
  this->dash();
  this->dash();
  this->dash();
}

void Morse::doi(){
  this->dot();
  this->dot();
  this->dash();
  this->dash();
  this->dash();
}

void Morse::trei(){
  this->dot();
  this->dot();
  this->dot();
  this->dash();
  this->dash();
}

void Morse::patru(){
  this->dot();
  this->dot();
  this->dot();
  this->dot();
  this->dash();
}

void Morse::cinci(){
  this->dot();
  this->dot();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::sase(){
  this->dash();
  this->dot();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::sapte(){
  this->dash();
  this->dash();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::opt(){
  this->dash();
  this->dash();
  this->dash();
  this->dot();
  this->dot();
}

void Morse::noua(){
  this->dash();
  this->dash();
  this->dash();
  this->dash();
  this->dot();
}

void Morse::zero(){
  this->dash();
  this->dash();
  this->dash();
  this->dash();
  this->dash();
}
