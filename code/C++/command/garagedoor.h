#ifndef GARAGEDOOR_H
#define GARAGEDOOR_H

#include <iostream>

class GarageDoor
{
public:
	void up() {
		std::cout << "Garage Door is Up" << std::endl;
	}

	void down() {
		std::cout << "Garage Door is Down" << std::endl;
	}

	void stop() {
		std::cout << "Garage Door is Stop" << std::endl;
	}

	void lightOn() {
		std::cout << "Garage Light is On" << std::endl;
	}

	void lightOff() {
		std::cout << "Garage Door is Off" << std::endl;
	}
};

#endif
