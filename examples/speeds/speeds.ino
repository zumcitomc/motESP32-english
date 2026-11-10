#include <motESP.h>
motesp motor;
const int ena = 17;
const int c1 = 25;
const int c2 = 26;
int time = 25;

void setup() {
  //this expample make the motor run while increase the speed
  motor.iniciarPWM(ena, c1, c2, 0);
}

void loop() {
  for (int i = 0; i < 256; i++){ //increase the speed forwards
    motor.movePWM('F');
    motor.setSpeed(i);
    delay(time);
  }
  motor.alto();
  delay(1000);
}