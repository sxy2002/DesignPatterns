#include "hasquarterstate.h"

HasQuarterState::HasQuarterState(GumballMachine * const gm) :gumballMachine(gm) {
	srand((int)time(NULL));
}

void HasQuarterState::insertQuarter()
{
	std::cout << "You can't insert another quarter" << std::endl;
}

void HasQuarterState::ejectQuarter()
{
	std::cout << "Quarter returned" << std::endl;
	this->gumballMachine->setState(this->gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	std::cout << "You turned..." << std::endl;
	int randomNumber = rand() % 11;
	// std::cout << randomNumber << std::endl;
	if (randomNumber == 0 && this->gumballMachine->getCount() > 1)
		this->gumballMachine->setState(this->gumballMachine->getWinnerState());
	else
		this->gumballMachine->setState(this->gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
	std::cout << "You need to turn the crank" << std::endl;
}

void HasQuarterState::refill()
{

}

void HasQuarterState::display()
{
	std::cout << "HasQuarterState, count:" << this->gumballMachine->getCount() << std::endl;
}