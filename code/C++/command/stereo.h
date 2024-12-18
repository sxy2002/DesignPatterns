#ifndef STEREO_H
#define STEREO_H

#include <iostream>

class Stereo
{
public:
	void on() {
		std::cout << "Stereo is On" << std::endl;
	}

	void off() {
		std::cout << "Stereo is Off" << std::endl;
	}

	void setCD() {
		std::cout << "set CD" << std::endl;
	}

	void setDVD() {
		std::cout << "set DVD" << std::endl;
	}

	void setRadio() {
		std::cout << "set Radio" << std::endl;
	}

	void setVolume(int v) {
		std::cout << "set Volume to " << v << std::endl;
	}
};

#endif