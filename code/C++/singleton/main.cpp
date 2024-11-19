#include "singleton1.h"
#include "singleton2.h"
#include "singleton3.h"
#include "singleton4.h"
#include "singleton5.h"
#include "singleton6.h"

int main()
{
	Singleton1 *s1 = Singleton1::getInstance();
	Singleton1 *s2 = Singleton1::getInstance();
	std::cout << (s1 == s2 ? "true" : "false") << std::endl;

	Singleton2 *s3 = Singleton2::getInstance();
	Singleton2 *s4 = Singleton2::getInstance();
	std::cout << (s3 == s4 ? "true" : "false") << std::endl;

	Singleton3 *s5 = Singleton3::getInstance();
	Singleton3 *s6 = Singleton3::getInstance();
	std::cout << (s5 == s6 ? "true" : "false") << std::endl;

	Singleton4 *s7 = Singleton4::getInstance();
	Singleton4 *s8 = Singleton4::getInstance();
	std::cout << (s7 == s8 ? "true" : "false") << std::endl;

	Singleton5& s9 = Singleton5::getInstance();
	Singleton5& s10 = Singleton5::getInstance();
	std::cout << &s9 << ", " << &s10 << " " << (&s9 == &s10 ? "true" : "false") << std::endl;

	Singleton6 *s11 = Singleton6::getInstance();
	Singleton6 *s12 = Singleton6::getInstance();
	std::cout << (s11 == s12 ? "true" : "false") << std::endl;

	delete s1;
	delete s3;
	delete s5;
	delete s7;
	delete s12;
	return 0;
}