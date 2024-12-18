#include "remotecontrol.h"

RemoteControl::RemoteControl(int n) {
	defaultCommand = new NoCommand();

	onCommands = std::vector<Command*>(n, defaultCommand);
	offCommands = std::vector<Command*>(n, defaultCommand);
	undoCommand = defaultCommand;
}

RemoteControl::~RemoteControl()
{
	if (defaultCommand) {
		delete defaultCommand;
		defaultCommand = nullptr;
	}
}

void RemoteControl::setCommand(int i, Command* const on, Command* const off) {
	if (i < 0 || i >= onCommands.size())	return;
	onCommands[i] = on;
	offCommands[i] = off;
}

void RemoteControl::onButtonWasPushed(int i) {
	if (i < 0 || i >= onCommands.size())	return;
	onCommands[i]->execute();
	undoCommand = onCommands[i];
}

void RemoteControl::offButtonWasPushed(int i) {
	if (i < 0 || i >= onCommands.size())	return;
	offCommands[i]->execute();
	undoCommand = offCommands[i];
}

void RemoteControl::undoButtonWasPushed() {
	undoCommand->undo();
}

void RemoteControl::display()
{
	std::cout << "\n------ Remote Control -------\n" << std::endl;
	for (int i = 0; i < onCommands.size(); i++) {
		std::cout << "[slot " << i << "] " << typeid(*dynamic_cast<Command*>(onCommands[i])).name() << 
			"    " << typeid(*dynamic_cast<Command*>(offCommands[i])).name() << std::endl;
	}
	std::cout << "[undo] " << typeid(*dynamic_cast<Command*>(undoCommand)).name() << std::endl;
	//std::cout << "[undo] " << typeid(undoCommand).name() << std::endl;
}