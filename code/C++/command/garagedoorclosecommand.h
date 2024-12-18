#ifndef GARAGEDOORCLOSECOMMAND_H
#define GARAGEDOORCLOSECOMMAND_H

#include "command.h"
#include "garagedoor.h"

class GarageDoorCloseCommand : public Command
{
private:
	GarageDoor *door;
public:
	GarageDoorCloseCommand(GarageDoor * const d) :door(d)	{}

	void execute() {
		door->down();
	}

	void undo() {
		door->up();
	}
};

#endif