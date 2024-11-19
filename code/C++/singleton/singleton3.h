#ifndef SINGLETON3_H
#define SINGLETON3_H

#include <iostream>
#include <mutex>

// Lazy 双重检查加锁
class Singleton3
{
private:
	static volatile Singleton3* singleton;
	static std::mutex mlock;

	Singleton3() {
		std::cout << "init Singleton3" << std::endl;
	}

	Singleton3(Singleton3 &other) = delete;
	void operator=(const Singleton3 &) = delete;
public:
	static Singleton3* getInstance() {
		if (singleton == nullptr) {
			std::lock_guard<std::mutex> lock(mlock); // 加锁
			if (singleton == nullptr)
				singleton = new Singleton3();
		}
		return const_cast<Singleton3*>(singleton);
	}
};

volatile Singleton3* Singleton3::singleton = nullptr;
std::mutex Singleton3::mlock;

#endif