#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "command.h"

class NoCommand : public Command
{
public:
	void execute() {	}

	void undo() {	}
};

#endif