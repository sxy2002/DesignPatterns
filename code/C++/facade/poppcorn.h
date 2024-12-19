#ifndef POPPCORNPOPPER_H
#define POPPCORNPOPPER_H

#include <iostream>

class PopcornPopper
{
public:
	void on() {
		std::cout << "PopcornPopper is on" << std::endl;
	}

	void off() {
		std::cout << "PopcornPopper is off" << std::endl;
	}

	void pop() {
		std::cout << "PopcornPopper pop" << std::endl;
	}
};

#endif