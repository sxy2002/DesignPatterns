#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

class Screen
{
public:
	void up() {
		std::cout << "Screen is up" << std::endl;
	}

	void down() {
		std::cout << "Screen is down" << std::endl;
	}
};

#endif