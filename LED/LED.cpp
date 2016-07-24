#include <iostream>
#include "LED.hpp"

namespace SunFounderPi {
	LED::LED(short pin) 
		: pin(pin), value(255), active(false) {
		softPwmCreate(pin, 0, 100);
	}

	LED::~LED() {
		DeInit();
	}

	// LED methods
	void LED::On() {
		softPwmWrite(pin, value);
		active = true;
	}

	void LED::Off() {
		softPwmWrite(pin, 0);
		active = false;
	}

	void LED::Toggle() {
		if(active)
			Off();
		else
			On();
	}

	// DeInit method
	void LED::DeInit() {
		Off();
		delay(10);
	}
}