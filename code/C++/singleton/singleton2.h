#ifndef SINGLETON2_H
#define SINGLETON2_H

#include <iostream>
#include <mutex>

// Lazy ÐÔÄÜ²î
class Singleton2
{
private:
	static Singleton2* singleton;
	static std::mutex mlock;

	Singleton2() {
		std::cout << "init Singleton2" << std::endl;
	}

	Singleton2(Singleton2 &other) = delete;
	void operator=(const Singleton2 &) = delete;
public:
	static Singleton2* getInstance() {
		std::lock_guard<std::mutex> lock(mlock); // ¼ÓËø
		if (singleton == nullptr)
			singleton = new Singleton2();
		return singleton;
	}
};

Singleton2* Singleton2::singleton = nullptr;
std::mutex Singleton2::mlock;

#endif