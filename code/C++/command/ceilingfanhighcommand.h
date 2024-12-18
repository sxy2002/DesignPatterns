#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H

#include "command.h"
#include "ceilingfan.h"

class CeilingFanHighCommand : public Command
{
private:
	CeilingFan *fan;
	Speed prevSpeed;
public:
	CeilingFanHighCommand(CeilingFan * const c) :fan(c), prevSpeed(OFF)	{}

	void execute() {
		prevSpeed = fan->getSpeed();
		fan->high();
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