#include "winnerstate.h"

WinnerState::WinnerState(GumballMachine * const gm) :gumballMachine(gm) {}

void WinnerState::insertQuarter()
{
	std::cout << "Please wait, we are already giving you a gumball" << std::endl;
}

void WinnerState::ejectQuarter()
{
	std::cout << "Sorry, you already turned the crank" << std::endl;
}

void WinnerState::turnCrank()
{
	std::cout << "Turning twice doesn't get you another gumball" << std::endl;
}

void WinnerState::dispense()
{
	this->gumballMachine->releaseBall();
	if (this->gumballMachine->getCount() > 0) {
		std::cout << "You are a winner! You got two gumballs for your quarter" << std::endl;
		this->gumballMachine->releaseBall();
		if (this->gumballMachine->getCount() > 0) {
			this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
		}
		else {
			std::cout << "Oops, out of gumballs!" << std::endl;
			this->gumballMachine->setState(this->gumballMachine->getSoldOutState());
		}
	}
	else {
		std::cout << "Oops, out of gumballs!" << std::endl;
		this->gumballMachine->setState(this->gumballMachine->getSoldOutState());
	}
}

void WinnerState::refill()
{

}

void WinnerState::display()
{
	std::cout << "WinnerState, count:" << this->gumballMachine->getCount() << std::endl;
}