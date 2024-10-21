#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <iostream>

class Subject
{
public:
	virtual ~Subject() = default;

	virtual void registerOserver(Observer * const o) = 0;
	virtual void removeOserver(Observer * const o) = 0;
	virtual void notifyOserver() = 0;
};

#endif