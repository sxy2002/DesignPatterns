#ifndef FAMYLIGHT_H
#define FAMYLIGHT_H

#include <iostream>

class Light
{
public:
	void on() {
		std::cout << "Light is on" << std::endl;
	}

	void off() {
		std::cout << "Light is off" << std::endl;
	}

	void dim(int d) {
		std::cout << "Light is dim to " << d << std::endl;
	}
};

#endif