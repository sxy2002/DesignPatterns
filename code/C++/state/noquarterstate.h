#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include "state.h"
#include "gumballmachine.h"

class GumballMachine;

class NoQuarterState : public State
{
private:
	GumballMachine *gumballMachine;
public:
	NoQuarterState(GumballMachine * const gm);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void refill();
	void display();
};

#endif