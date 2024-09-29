#include "redheadduck.h"

RedHeadDuck::RedHeadDuck() {
	this->flyBehavior = new FlyWithWings();
	this->quackBehavior = new Quack();
}

void RedHeadDuck::dispaly() {
	std::cout << "RedHeadDuck" << std::endl;
}