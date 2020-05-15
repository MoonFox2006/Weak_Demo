#include <Arduino.h>
#include "WeakDemo.h"

void g() {
  Serial.println(F("main::g()"));
}

void setup() {
  Serial.begin(115200, SERIAL_8N1, SERIAL_TX_ONLY);
  Serial.println();

  f();
  g();

  Serial.flush();
  ESP.deepSleep(0);
}

void loop() {}
