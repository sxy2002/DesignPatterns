#ifndef ADAMYTURKEYADAPTER_H
#define ADAMYTURKEYADAPTER_H

#include "duck.h"
#include "wildturkey.h"

class TurkeyAdapter : public Duck, public WildTurkey
{
private:

public:
	void quack() {
		gobble();
	}

	void fly() {
		for (int i = 0; i < 5; i++)
			WildTurkey::fly();
	}
};

#endif