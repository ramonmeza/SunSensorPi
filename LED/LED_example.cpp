#include <iostream>
#include <wiringPi.h>

// Include LED class
#include "LED.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	if(argc != 2) {
		cout << "Please enter an argument for the value." << endl;
		return 1;
	}
	
	if(wiringPiSetup() == -1) {
		cout << "wiringPiSetup() failed." << endl;
		return 1;
	}
	
	// Initialize a new LED
	SunSensorPi::LED led;
	
	// Set the value (0-255)
	led.SetValue(atoi(argv[1]));
	
	// Turn on LED
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