#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void phrase(String string);
    void letter(int key);
    void dot();
    void dash();
    void a();
    void b();
    void c();
    void d();
    void e();
    void f();
    void g();
    void h();
    void i();
    void j();
    void k();
    void l();
    void m();
    void n();
    void o();
    void u();
    void v();
    void p();
    void r();
    void s();
    void t();
    void w();
    void x();
    void y();
    void q();
    void z();
    void unul();
    void doi();
    void trei();
    void patru();
    void cinci();
    void sase();
    void sapte();
    void opt();
    void noua();
    void zero();
  private:
    int _pin;
};

#endif
