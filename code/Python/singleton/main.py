from singletons.singleton import *

if __name__ == "__main__":
    
    s1 = Singleton1()
    s2 = Singleton1()
    print(s1 is s2)
    
    s1 = Singleton2()
    s2 = Singleton2()
    print(s1 is s2)
    
    s1 = Singleton3()
    s2 = Singleton3()
    print(s1 is s2)
    
    s1 = Singleton4()
    s2 = Singleton4()
    print(s1 is s2)