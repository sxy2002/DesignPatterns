#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "command.h"
#include <vector>

class MacroCommand : public Command
{
private:
	std::vector<Command*> commands;
public:
	MacroCommand(const std::vector<Command*> &c) :commands(c)	{}

	void execute() {
		for (Command* c : commands)
			c->execute();
	}

	void undo() {
		for (int i = commands.size() - 1; i >= 0; i--)
			commands[i]->undo();
	}
};

#endif

