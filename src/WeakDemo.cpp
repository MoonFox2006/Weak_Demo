#include <Arduino.h>
#include "WeakDemo.h"

void f() {
  Serial.println(F("WeakDemo::f()"));
  g();
}

void __attribute__((weak)) g() {
  Serial.println(F("WeakDemo::g()"));
}
