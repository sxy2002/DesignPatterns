#ifndef SINGLETON4_H
#define SINGLETON4_H

#include <iostream>

// Early
class Singleton4
{
private:
	static Singleton4* singleton;

	Singleton4() {
		std::cout << "init Singleton4" << std::endl;
	}

	Singleton4(Singleton4 &other) = delete;
	void operator=(const Singleton4 &) = delete;
public:
	static Singleton4* getInstance() {
		return singleton;
	}
};

Singleton4* Singleton4::singleton = new Singleton4();

#endif