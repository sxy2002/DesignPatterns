#include "gumballmachine.h"

GumballMachine::GumballMachine(const int &c) :count(c) {
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);
	winnerState = new WinnerState(this);
	soldOutState = new SoldOutState(this);

	if (c > 0)
		curState = noQuarterState;
	else
		curState = soldOutState;
}

GumballMachine::~GumballMachine()
{
	if (noQuarterState) {
		delete noQuarterState;
		noQuarterState = nullptr;
		std::cout << "free noQuarterState" << std::endl;
	}
	if (hasQuarterState) {
		delete hasQuarterState;
		hasQuarterState = nullptr;
		std::cout << "free hasQuarterState" << std::endl;
	}
	if (soldState) {
		delete soldState;
		soldState = nullptr;
		std::cout << "free soldState" << std::endl;
	}
	if (winnerState) {
		delete winnerState;
		winnerState = nullptr;
		std::cout << "free winnerState" << std::endl;
	}
	if (soldOutState) {
		delete soldOutState;
		soldOutState = nullptr;
		std::cout << "free soldOutState" << std::endl;
	}
	curState = nullptr;
}

void GumballMachine::insertQuarter()
{
	this->curState->insertQuarter();
}
void GumballMachine::ejectQuarter()
{
	this->curState->ejectQuarter();
}
void GumballMachine::turnCrank()
{
	this->curState->turnCrank();
	if (dynamic_cast<SoldState*>(this->curState) || dynamic_cast<WinnerState*>(this->curState))
		this->curState->dispense();
}
void GumballMachine::releaseBall()
{
	std::cout << "A gumball comes rolling out the slot..." << std::endl;
	if (this->count > 0)
		this->count -= 1;
}
void GumballMachine::refill(const int& c)
{
	this->count += c;
	std::cout << "The gumball machine was just refilled; its new count is:" << this->count << std::endl;
	this->curState->refill();	//**
}

void GumballMachine::setState(State * const s)
{
	this->curState = s;
}
int GumballMachine::getCount()const
{
	return this->count;
}
State* GumballMachine::getNoQuarterState()const
{
	return this->noQuarterState;
}
State* GumballMachine::getHasQuarterState()const
{
	return this->hasQuarterState;
}
State* GumballMachine::getSoldState()const
{
	return this->soldState;
}
State* GumballMachine::getWinnerState()const
{
	return this->winnerState;
}
State* GumballMachine::getSoldOutState()const
{
	return this->soldOutState;
}
State* GumballMachine::getCurState()const
{
	return this->curState;
}

void GumballMachine::output()const
{
	this->curState->display();
}