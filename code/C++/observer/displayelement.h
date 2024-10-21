#ifndef DISPLAYMENT_H
#define DISPLAYMENT_H

#include <iostream>

class DisplayElement
{
public:
	virtual ~DisplayElement() = default;
	virtual void display() = 0;
};

#endif