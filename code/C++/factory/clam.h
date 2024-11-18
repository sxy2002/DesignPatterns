#ifndef CLAM_H
#define CLAM_H

#include <iostream>

class Clam
{
public:
	Clam()	{}
	virtual ~Clam() = default;

	virtual std::string getName() = 0;
};

#endif