#include <motESP.h>
const int ena = 16;
const int c1 = 27;
const int c2 = 14;

motesp motor;
void setup() {
  //this example is for digital controll
  motor.start(ena, c1, c2);
}

void loop() {
  motor.moveFor(2500,'F');
  motor.stop();
  delay(2500);
  motor.moveFor(2500,'B');
}
