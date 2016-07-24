#include <iostream>
#include "RgbLED.hpp"

RgbLED::RgbLED(short pinR, short pinG, short pinB) 
	: pinR(pinR), pinG(pinG), pinB(pinB), 
	  valR(255), valG(255), valB(255) {
	softPwmCreate(pinR, 0, 100);
	softPwmCreate(pinG, 0, 100);
	softPwmCreate(pinB, 0, 100);
	
	active = false;
}

RgbLED::~RgbLED() {
	DeInit();
}

void RgbLED::On() {
	softPwmWrite(pinR, valR);
	softPwmWrite(pinG, valG);
	softPwmWrite(pinB, valB);
	
	active = true;
}

void RgbLED::Off() {
	softPwmWrite(pinR, 0);
	softPwmWrite(pinG, 0);
	softPwmWrite(pinB, 0);
	
	active = false;
}