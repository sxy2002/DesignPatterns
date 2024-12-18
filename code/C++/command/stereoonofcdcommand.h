#ifndef STEREOONOFFCDCOMMAND_H
#define STEREOONOFFCDCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereoOnOfCDCommand : public Command
{
private:
	Stereo *stereo;
public:
	StereoOnOfCDCommand(Stereo * const s) :stereo(s)	{}

	void execute() {
		stereo->on();
		stereo->setCD();
		stereo->setVolume(10);
	}

	void undo() {
		stereo->off();
	}
};

#endif