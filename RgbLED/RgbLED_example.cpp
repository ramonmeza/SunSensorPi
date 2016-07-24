#include <iostream>
#include <wiringPi.h>

// Include RgbLED class
#include "RgbLED.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	if(argc != 4) {
		cout << "Please enter 3 arguments for the color." << endl;
		return 1;
	}
	
	if(wiringPiSetup() == -1) {
		cout << "wiringPiSetup() failed." << endl;
		return 1;
	}
	
	// Initialize a new RgbLED
	SunSensorPi::RgbLED led;
	
	// Set the 3 color values (0-255)
	led.SetValue(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	
	// Turn om LED
	led.On();
	delay(1000);
	
	// Turn off LED
	led.Off();
	delay(1000);
	
	// Toggle LED state
	led.Toggle();
	delay(1000);
	led.Toggle();
	delay(1000);
	led.Toggle();
	delay(1000);
	
	return 0;
}