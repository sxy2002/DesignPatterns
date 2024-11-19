#ifndef SINGLETON1_H
#define SINGLETON1_H

#include <iostream>

// Lazy 线程不安全
class Singleton1
{
private:
	static Singleton1* singleton;

	Singleton1() {
		std::cout << "init Singleton1" << std::endl;
	}

	Singleton1(Singleton1 &other) = delete;
	void operator=(const Singleton1 &) = delete;
public:
	static Singleton1* getInstance() {
		if (singleton == nullptr)
			singleton = new Singleton1();
		return singleton;
	}
};

Singleton1* Singleton1::singleton = nullptr;

#endif