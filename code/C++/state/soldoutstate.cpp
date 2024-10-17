#include "soldoutstate.h"

SoldOutState::SoldOutState(GumballMachine * const gm) :gumballMachine(gm) {}

void SoldOutState::insertQuarter()
{
	std::cout << "You can't insert a quarter, the machine is sold out" << std::endl;
}

void SoldOutState::ejectQuarter()
{
	std::cout << "You can't eject, you have not inserted a quarter yet" << std::endl;
}

void SoldOutState::turnCrank()
{
	std::cout << "You turned, but there is no quarter" << std::endl;
}

void SoldOutState::dispense()
{
	std::cout << "No gumball dispense" << std::endl;
}

void SoldOutState::refill()
{
	if (this->gumballMachine->getCount() > 0)
		this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
	else
		this->gumballMachine->setState(this->gumballMachine->getSoldOutState());
}

void SoldOutState::display()
{
	std::cout << "SoldOutState, count:" << this->gumballMachine->getCount() << std::endl;
}