#ifndef PROJECTOR_H
#define PROJECTOR_H

#include <iostream>
#include "streamingplayer.h"

class Projector
{
private:
	StreamingPlayer *player;
public:
	Projector(StreamingPlayer * const p) :player(p)	{}

	void on() {
		std::cout << "Projector is on" << std::endl;
	}

	void off() {
		std::cout << "Projector is off" << std::endl;
	}

	void wideScreenMode() {
		std::cout << "set wideScreenMode" << std::endl;
	}

	void tvMode() {
		std::cout << "set tvMode" << std::endl;
	}
};

#endif