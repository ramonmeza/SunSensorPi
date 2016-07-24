#ifndef _SENSORPI_RGBLED_HPP
#define _SENSORPI_RGBLED_HPP

#include "../LED/LED.hpp"

class RgbLED : public LED {
private:
	short pinR;
	short pinG;
	short pinB;
	
	short valR;
	short valG;
	short valB;
	
public:
	RgbLED(short pinR = 0, short pinG = 1, short pinB = 2);
	~RgbLED();
	
	// Get methods are inherited from LED class

	// Set methods
	void SetValue(short R = 0, short G = 0, short B = 0) {
		valR = R;
		valG = G;
		valB = B;
	}
	
	// LED methods, Toggle() is inherited from LED class
	void On();
	void Off();
};

#endif