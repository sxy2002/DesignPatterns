#include "gumballmachine.h"

int main()
{
	GumballMachine *gumballMachine = new GumballMachine(0);
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->ejectQuarter();
	gumballMachine->turnCrank();

	gumballMachine->refill(0);
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->ejectQuarter();

	gumballMachine->refill(10);
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->ejectQuarter();
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->ejectQuarter();
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->output();

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->output();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->output();

	delete gumballMachine;
	return 0;
}