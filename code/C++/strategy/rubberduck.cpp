#include "rubberduck.h"

RubberDuck::RubberDuck() {
	this->flyBehavior = new FlyNoWay();
	this->quackBehavior = new MuteQuack();
}

void RubberDuck::dispaly() {
	std::cout << "RubberDuck" << std::endl;
}