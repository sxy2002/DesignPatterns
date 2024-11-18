#ifndef FROZENCLAM_H
#define FROZENCLAM_H

#include "clam.h"

class FrozenClam : public Clam
{
public:
	std::string getName() {
		return "Frozen Clam";
	}
};

#endif
