#ifndef ADAMYDUCKADAPTER_H
#define ADAMYDUCKADAPTER_H

#include "turkey.h"
#include "duck.h"
#include <ctime>

class DuckAdapter : public Turkey
{
private:
	Duck *duck;
public:
	DuckAdapter(Duck * const d) :duck(d)	{
		srand((int)time(NULL));
	}

	void gobble() {
		duck->quack();
	}

	void fly() {
		int randomNumber = rand() % 5;
		std::cout << randomNumber << std::endl;
		if (randomNumber == 0)
			duck->fly();
	}
};

#endif