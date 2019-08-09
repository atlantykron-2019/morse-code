#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::phrase(String string)
{
  for (int i = 0; i < string.length(); i ++) {
    this->letter(string.charAt(i));
  }
}

void Morse::letter(int key)
{
  switch (key) {
    /**
     * letters
     */
    case 'a': this->a(); break;
    case 'b': this->b(); break;
    case 'c': this->c(); break;
    case 'd': this->d(); break;
    case 'e': this->e(); break;
    case 'f': this->f(); break;
    case 'g': this->g(); break;
    case 'h': this->h(); break;
    case 'i': this->i(); break;
    case 'j': this->j(); break;
    case 'k': this->k(); break;
    case 'l': this->l(); break;
    case 'm': this->m(); break;
    case 'n': this->n(); break;
    case 'u': this->u(); break;
    case 'o': this->o(); break;
    case 'p': this->p(); break;
    case 'r': this->r(); break;
    case 's': this->s(); break;
    case 't': this->t(); break;
    case 'w': this->w(); break;
    case 'x': this->x(); break;
    case 'y': this->y(); break;
    case 'q': this->q(); break;
    case 'z': this->z(); break;

    /**
     * digits
     */
    case '1': this->unul(); break;
    case '2': this->doi(); break;
    case '3': this->trei(); break;
    case '4': this->patru(); break;
    case '5': this->cinci(); break;
    case '6': this->sase(); break;
    case '7': this->sapte(); break;
    case '8': this->opt(); break;
    case '9': this->noua(); break;
    case '0': this->zero(); break;
  }
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

void Morse::u() {
  this->dot();
  this->dot();
  this->dash();
}

void Morse::v() {
  this->dot();
  this->dot();
  this->dot();
  this->dash();
}

void Morse::w() {
  this->dot();
  this->dash();
  this->dash();
}

void Morse::x() {
  this->dash();
  this->dot();
  this->dot();
  this->dash();
}

void Morse::y() {
  this->dash();
  this->dot();
  this->dash();
  this->dash();
}

void Morse::z() {
  this->dash();
  this->dash();
  this->dot();
  this->dot();
}

void Morse::unul() {
  this->dot();
  this->dash();
  this->dash();
  this->dash();
  this->dash();
}

void Morse::doi() {
  this->dot();
  this->dot();
  this->dash();
  this->dash();
  this->dash();
}

void Morse::trei() {
  this->dot();
  this->dot();
  this->dot();
  this->dash();
  this->dash();
}

void Morse::patru() {
  this->dot();
  this->dot();
  this->dot();
  this->dot();
  this->dash();
}

void Morse::cinci() {
  this->dot();
  this->dot();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::sase() {
  this->dash();
  this->dot();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::sapte() {
  this->dash();
  this->dash();
  this->dot();
  this->dot();
  this->dot();
}

void Morse::opt() {
  this->dash();
  this->dash();
  this->dash();
  this->dot();
  this->dot();
}

void Morse::noua() {
  this->dash();
  this->dash();
  this->dash();
  this->dash();
  this->dot();
}

void Morse::zero() {
  this->dash();
  this->dash();
  this->dash();
  this->dash();
  this->dash();
}
