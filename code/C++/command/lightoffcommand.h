#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "command.h"
#include "light.h"

class LightOffCommand : public Command
{
private:
	Light *light;
public:
	LightOffCommand(Light * const l) :light(l)	{}

	void execute() {
		light->off();
	}

	void undo() {
		light->on();
	}
};

#endif