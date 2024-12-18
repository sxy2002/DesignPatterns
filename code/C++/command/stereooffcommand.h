#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereoOffCommand : public Command
{
private:
	Stereo *stereo;
public:
	StereoOffCommand(Stereo * const s) :stereo(s)	{}

	void execute() {
		stereo->off();
	}

	void undo() {
		stereo->on();
	}
};

#endif