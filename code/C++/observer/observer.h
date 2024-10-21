#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
	virtual ~Observer() = default;
	virtual void update() = 0;
	virtual void registerObserver() = 0;
	virtual void removeObserver() = 0;
};

#endif