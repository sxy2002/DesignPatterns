#ifndef STREAMINGPLAYER_H
#define STREAMINGPLAYER_H

#include <iostream>
#include "ampifier.h"
#include <string>

class Amplifier;

class StreamingPlayer
{
private:
	Amplifier *amplifier;
public:
	StreamingPlayer(Amplifier * const a) :amplifier(a)		{}

	void on() {
		std::cout << "StreamingPlayer is on" << std::endl;
	}

	void off() {
		std::cout << "StreamingPlayer is off" << std::endl;
	}

	void play(const std::string &movie) {
		std::cout << "StreamingPlayer is play " << movie << std::endl;
	}

	void stop() {
		std::cout << "StreamingPlayer is stop" << std::endl;
	}
};

#endif