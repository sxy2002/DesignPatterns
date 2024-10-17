#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "state.h"
#include "gumballmachine.h"

class GumballMachine;

class SoldState : public State
{
private:
	GumballMachine *gumballMachine;
public:
	SoldState(GumballMachine * const gm);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void refill();
	void display();
};

#endif