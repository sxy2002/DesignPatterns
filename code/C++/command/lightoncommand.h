#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "command.h"
#include "light.h"

class LightOnCommand : public Command
{
private:
	Light *light;
public:
	LightOnCommand(Light * const l) :light(l)	{}

	void execute() {
		light->on();
	}

	void undo() {
		light->off();
	}
};

#endif