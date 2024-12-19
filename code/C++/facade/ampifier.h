#ifndef AMPIFIER_H
#define AMPIFIER_H

#include <iostream>
#include "streamingplayer.h"

class StreamingPlayer;

class Amplifier
{
private:
	StreamingPlayer *player;
public:
	void on() {
		std::cout << "Amplifier is on" << std::endl;
	}

	void off() {
		std::cout << "Amplifier is off" << std::endl;
	}

	void setStreamingPlayer(StreamingPlayer * const p) {
		player = p;
		std::cout << "set StreamingPlayer " << player << std::endl;
	}

	void setStereoSound() {
		std::cout << "set Stereo Sound" << std::endl;
	}

	void setSurroundSound() {
		std::cout << "set Surround Sound" << std::endl;
	}

	void setVolume(int v) {
		std::cout << "set Volume to " << v << std::endl;
	}
};

#endif