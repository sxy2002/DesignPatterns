#ifndef LIGHT_H
#define LIGHT_H

#include <iostream>

class Light
{
public:
	void on() {
		std::cout << "Light is On" << std::endl;
	}

	void off() {
		std::cout << "Light is Off" << std::endl;
	}
};

#endif