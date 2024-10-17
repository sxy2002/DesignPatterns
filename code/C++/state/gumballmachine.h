#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include "state.h"
#include "noquarterstate.h"
#include "hasquarterstate.h"
#include "soldstate.h"
#include "winnerstate.h"
#include "soldoutstate.h"

class NoQuarterState;
class HasQuarterState;
class SoldState;
class WinnerState;
class SoldOutState;

class GumballMachine
{
private:
	State *noQuarterState;
	State *hasQuarterState;
	State *soldState;
	State *winnerState;
	State *soldOutState;

	State *curState;
	int count;
public:
	GumballMachine(const int &c);
	~GumballMachine();

	void insertQuarter();
	void ejectQuarter();
	void turnCrank();
	void releaseBall();
	void refill(const int& c);

	void setState(State * const s);
	int getCount()const;
	State* getNoQuarterState()const;
	State* getHasQuarterState()const;
	State* getSoldState()const;
	State* getWinnerState()const;
	State* getSoldOutState()const;
	State* getCurState()const;

	void output()const;
};

#endif