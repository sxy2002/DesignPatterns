#ifndef GARAGEDOOROPENCOMMAND_H
#define GARAGEDOOROPENCOMMAND_H

#include "command.h"
#include "garagedoor.h"

class GarageDoorOpenCommand : public Command
{
private:
	GarageDoor *door;
public:
	GarageDoorOpenCommand(GarageDoor * const d) :door(d)	{}

	void execute() {
		door->up();
	}

	void undo() {
		door->down();
	}
};

#endif