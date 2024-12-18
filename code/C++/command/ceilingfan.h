#ifndef CEILINGFAN_H
#define CEILINGFAN_H

#include <iostream>

enum Speed
{
	HIGH, MEDIUM, LOW, OFF
};

class CeilingFan
{
private:
	Speed speed = OFF;
public:
	void high() {
		speed = HIGH;
		std::cout << "CeilingFan is High" << std::endl;
	}

	void medium() {
		speed = MEDIUM;
		std::cout << "CeilingFan is Medium" << std::endl;
	}

	void low() {
		speed = LOW;
		std::cout << "CeilingFan is Low" << std::endl;
	}

	void off() {
		speed = OFF;
		std::cout << "CeilingFan is Off" << std::endl;
	}

	Speed getSpeed() {
		return speed;
	}
};

#endif