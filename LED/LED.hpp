#ifndef _SENSORPI_LED_HPP
#define _SENSORPI_LED_HPP

#include <wiringPi.h>
#include <softPwm.h>

namespace SunFounderPi {
	class LED {
	private:
		short pin;
		short value;
		
	protected:
		bool active;
		
	public:
		LED(short pin = 0);
		~LED();
		
		// Get methods
		bool Active() { return active; }
		short Value() { return value; }
		
		// Set methods
		void SetValue(short value = 0) { this->value = value; }
		
		// LED methods
		virtual void On();
		virtual void Off();
		void Toggle();
		
		// DeInit method
		void DeInit();
	};
}

#endif