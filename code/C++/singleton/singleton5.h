#ifndef SINGLETON5_H
#define SINGLETON5_H

#include <iostream>

// Lazy 静态局部变量（线程安全）
class Singleton5
{
private:

	Singleton5() {
		std::cout << "init Singleton5" << std::endl;
	}

	Singleton5(Singleton5 &other) = delete;
	void operator=(const Singleton5 &) = delete;
public:
	static Singleton5& getInstance() {
		static Singleton5 singleton;
		return singleton;
	}
};

#endif