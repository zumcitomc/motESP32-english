#include <motESP.h>  // include the librery

const int ena = 16;
const int c1 = 27;
const int c2 = 14;

motesp motor;
void setup() {
  //this example is for digital controll
  motor.start(ena, c1, c2);
}

void loop() {
  motor.move('F');
  delay(2500);
  motor.move('S');
  delay(1000);
  // motor.alto(); //another way to stop
  motor.move('B');
  delay(2500);
  motor.stop();
  // motor.mover('S'); //like before. How you want
  delay(1000);
}