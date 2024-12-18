#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H

#include "command.h"
#include "ceilingfan.h"

class CeilingFanMediumCommand : public Command
{
private:
	CeilingFan *fan;
	Speed prevSpeed;
public:
	CeilingFanMediumCommand(CeilingFan * const c) :fan(c), prevSpeed(OFF)	{}

	void execute() {
		prevSpeed = fan->getSpeed();
		fan->medium();
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