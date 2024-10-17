#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H

#include "state.h"
#include "gumballmachine.h"

class GumballMachine;

class SoldOutState : public State
{
private:
	GumballMachine *gumballMachine;
public:
	SoldOutState(GumballMachine * const gm);

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void dispense();
	void refill();
	void display();
};

#endif