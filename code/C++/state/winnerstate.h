#ifndef WINNERSTATE_H
#define WINNERSTATE_H

#include "state.h"
#include "gumballmachine.h"

class GumballMachine;

class WinnerState : public State
{
private:
	GumballMachine *gumballMachine;
public:
	WinnerState(GumballMachine * const gm);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void refill();
	void display();
};

#endif