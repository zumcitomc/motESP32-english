#include <Arduino.h>

#ifndef motESP
#define motESP

//hey, si estas leyendo esto, preparate para el mucho texto :)
class motesp{
private:
	int EN;
	int CO1;
	int CO2;
	int en;
	int co1;
	int co2;
	const int ledChannel = 0;
	const int ledChael = 1;
	const int ledChanel = 2;
	const int frequency = 5000;
	const int resolution = 8;
	int velocidad;
public:
	void startPWM(int EN,int CO1,int CO2,int torque);
	void start(int EN, int CO1,int CO2);
	void move(char dir);
	void movePWM(char dir);
	void stop();
	void setSpeed(int valor);
	void moveFor(int tiempo_ms, char direccion);
};
#endif