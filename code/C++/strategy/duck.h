#ifndef DUCK_H
#define DUCK_H

#include "flybehavior.h"
#include "quackbehavior.h"

#include "flywithwings.h"
#include "flynoway.h"
#include "flyrocketpower.h"
#include "quack.h"
#include "squack.h"
#include "mutequack.h"

class Duck
{
protected:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;
public:
	Duck()	{}
	~Duck() {
		if (flyBehavior) {
			delete flyBehavior;
			flyBehavior = nullptr;
			std::cout << "free flyBehavior" << std::endl;
		}
		if (quackBehavior) {
			delete quackBehavior;
			quackBehavior = nullptr;
			std::cout << "free quackBehavior" << std::endl;
		}
	}

	void swim() {
		std::cout << "swim" << std::endl;
	}

	virtual void dispaly() = 0;

	void performFly() {
		flyBehavior->fly();
	}

	void performQuack() {
		quackBehavior->quack();
	}

	void setFlyBehavior(FlyBehavior* const f) {
		if (flyBehavior) {
			delete flyBehavior;
			flyBehavior = nullptr;
			std::cout << "free ori_fly" << std::endl;
		}
		this->flyBehavior = f;
	}

	void setQuackBehavior(QuackBehavior* const q) {
		if (quackBehavior) {
			delete quackBehavior;
			quackBehavior = nullptr;
			std::cout << "free ori_quack" << std::endl;
		}
		this->quackBehavior = q;
	}
};

#endif