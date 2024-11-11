#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

enum Size
{
	TALL, GRANDE, VENTI
};

class Beverage 
{
protected:
	std::string description = "Unknown";
	Size size = TALL;
public:
	virtual ~Beverage() = default;

	void setSize(const Size &s) {
		this->size = s;
	}

	Size getSize() {
		return this->size;
	}

	virtual std::string getDescription() = 0;
	virtual double cost() = 0;
};

#endif