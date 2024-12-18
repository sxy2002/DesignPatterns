#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H

#include "command.h"
#include "ceilingfan.h"

class CeilingFanOFFCommand : public Command
{
private:
	CeilingFan *fan;
	Speed prevSpeed;
public:
	CeilingFanOFFCommand(CeilingFan * const c) :fan(c), prevSpeed(OFF)	{}

	void execute() {
		prevSpeed = fan->getSpeed();
		fan->off();
	}

	void undo() {
		if (prevSpeed == HIGH)
			fan->high();
		else if (prevSpeed == MEDIUM)
			fan->medium();
		else if (prevSpeed == LOW)
			fan->low();
		else if (prevSpeed == OFF)
			fan->off();
	}
};

#endif