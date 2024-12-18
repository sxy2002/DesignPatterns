#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include <vector>
#include <iostream>
#include "command.h"
#include "nocommand.h"

class RemoteControl
{
private:
	std::vector<Command*> onCommands;
	std::vector<Command*> offCommands;
	Command* undoCommand;
	Command* defaultCommand;
public:
	RemoteControl(int n);
	~RemoteControl();

	void setCommand(int i, Command* const on, Command* const off);
	
	void onButtonWasPushed(int i);
	void offButtonWasPushed(int i);
	void undoButtonWasPushed();

	void display();
};

#endif