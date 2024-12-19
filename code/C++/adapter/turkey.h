#ifndef ADAMYTURKEY_H
#define ADAMYTURKEY_H

#include <iostream>

class Turkey
{
public:
	virtual ~Turkey() = default;

	virtual void gobble() = 0;
	virtual void fly() = 0;
};

#endif