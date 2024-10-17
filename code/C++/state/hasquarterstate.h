#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H

#include "state.h"
#include "gumballmachine.h"

#include <ctime>

class GumballMachine;

class HasQuarterState : public State
{
private:
	GumballMachine *gumballMachine;
public:
	HasQuarterState(GumballMachine * const gm);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void refill();
	void display();
};

#endif