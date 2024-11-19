#ifndef SINGLETON6_H
#define SINGLETON6_H

#include <iostream>
#include <mutex>

// Lazy 线程安全
class Singleton6
{
private:
	static Singleton6* singleton;
	static std::once_flag flag;

	Singleton6() {
		std::cout << "init Singleton6" << std::endl;
	}

	Singleton6(Singleton6 &other) = delete;
	void operator=(const Singleton6 &) = delete;
public:
	static Singleton6* getInstance() {
		std::call_once(flag, []() {
			singleton = new Singleton6();
		});
		return singleton;
	}
};

Singleton6* Singleton6::singleton = nullptr;
std::once_flag Singleton6::flag;

#endif