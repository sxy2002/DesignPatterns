#include "remotecontrol.h"
#include "light.h"
#include "garagedoor.h"
#include "ceilingfan.h"
#include "stereo.h"
#include "command.h"
#include "lightoncommand.h"
#include "lightoffcommand.h"
#include "garagedooropencommand.h"
#include "garagedoorclosecommand.h"
#include "ceilingfanhighcommand.h"
#include "ceilingfanmediumcommand.h"
#include "ceilingfanoffcommand.h"
#include "stereoonofcdcommand.h"
#include "stereooffcommand.h"
#include "macrocommand.h"

int main()
{
	RemoteControl *control = new RemoteControl(7);
	control->display();

	Light *light = new Light();
	GarageDoor *door = new GarageDoor();
	CeilingFan *fan = new CeilingFan();
	Stereo *stereo = new Stereo();

	Command *lighton = new LightOnCommand(light);
	Command *lightoff = new LightOffCommand(light);
	Command *dooropen = new GarageDoorOpenCommand(door);
	Command *doorclose = new GarageDoorCloseCommand(door);
	Command *fanhigh = new CeilingFanHighCommand(fan);
	Command *fanmedium = new CeilingFanMediumCommand(fan);
	Command *fanoff = new CeilingFanOFFCommand(fan);
	Command *stereooncd = new StereoOnOfCDCommand(stereo);
	Command *stereooff = new StereoOffCommand(stereo);
	std::vector<Command*> on({ lighton, dooropen, stereooncd });
	std::vector<Command*> off({ lightoff, doorclose, stereooff });
	Command *macroon = new MacroCommand(on);
	Command *macrooff = new MacroCommand(off);

	control->setCommand(0, lighton, lightoff);
	control->setCommand(1, dooropen, doorclose);
	control->setCommand(2, stereooncd, stereooff);
	control->setCommand(3, fanhigh, fanoff);
	control->setCommand(4, fanmedium, fanoff);
	control->setCommand(5, macroon, macrooff);
	control->display();

	control->onButtonWasPushed(0);
	control->offButtonWasPushed(0);
	control->display();
	control->onButtonWasPushed(1);
	control->display();
	control->undoButtonWasPushed();

	control->onButtonWasPushed(2);
	control->offButtonWasPushed(2);
	control->onButtonWasPushed(5);
	control->undoButtonWasPushed();

	control->onButtonWasPushed(3);
	control->offButtonWasPushed(3);
	control->undoButtonWasPushed();
	control->onButtonWasPushed(4);
	control->undoButtonWasPushed();

	delete lighton;
	delete lightoff;
	delete dooropen;
	delete doorclose;
	delete fanhigh;
	delete fanmedium;
	delete fanoff;
	delete stereooncd;
	delete stereooff;
	delete macroon;
	delete macrooff;
	delete light;
	delete door;
	delete fan;
	delete stereo;
	delete control;
	return 0;
}