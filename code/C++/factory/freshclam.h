#ifndef FRESHCLAM_H
#define FRESHCLAM_H

#include "clam.h"

class FreshClam : public Clam
{
public:
	std::string getName() {
		return "Fresh Clam";
	}
};

#endif