#include "mallardduck.h"

MallardDuck::MallardDuck() {
	this->flyBehavior = new FlyWithWings();
	this->quackBehavior = new Quack();
}

void MallardDuck::dispaly() {
	std::cout << "MallardDuck" << std::endl;
}