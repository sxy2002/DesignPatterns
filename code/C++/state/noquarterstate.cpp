#include "noquarterstate.h"

NoQuarterState::NoQuarterState(GumballMachine * const gm):gumballMachine(gm) {}

void NoQuarterState::insertQuarter()
{
	std::cout << "You insert a quarter" << std::endl;
	this->gumballMachine->setState(this->gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	std::cout << "You haven't insert a quarter" << std::endl;
}

void NoQuarterState::turnCrank()
{
	std::cout << "You turned but there is no quarter" << std::endl;
}

void NoQuarterState::dispense()
{
	std::cout << "You need to pay first" << std::endl;
}

void NoQuarterState::refill()
{

}

void NoQuarterState::display()
{
	std::cout << "NoQuarterState, count:" << this->gumballMachine->getCount() << std::endl;
}