#include "soldstate.h"

SoldState::SoldState(GumballMachine * const gm) :gumballMachine(gm) {}

void SoldState::insertQuarter()
{
	std::cout << "Please wait, we are already giving you a gumball" << std::endl;
}

void SoldState::ejectQuarter()
{
	std::cout << "Sorry, you already turned the crank" << std::endl;
}

void SoldState::turnCrank()
{
	std::cout << "Turning twice doesn't get you another gumball" << std::endl;
}

void SoldState::dispense()
{
	this->gumballMachine->releaseBall();
	if (this->gumballMachine->getCount() > 0)
		this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
	else {
		std::cout << "Oops, out of gumballs!" << std::endl;
		this->gumballMachine->setState(this->gumballMachine->getSoldOutState());
	}
}

void SoldState::refill()
{

}

void SoldState::display()
{
	std::cout << "SoldState, count:" << this->gumballMachine->getCount() << std::endl;
}