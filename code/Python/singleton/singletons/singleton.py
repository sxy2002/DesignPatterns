import threading

# 类变量
class Singleton1:
    __singleton = None
    
    def __init__(self):
        if not hasattr(self, '_initialized'):  # 防止重复初始化
            self._initialized = True
            print("init Singleton1")

    def __new__(cls, *args, **kwargs):
        if not cls.__singleton:
            cls.__singleton = super().__new__(cls)
        return cls.__singleton
    
# 修饰器
def singleton(cls):
    __singleton = {}
    
    def get_instance(*args, **kwargs):
        if cls not in __singleton:
            __singleton[cls] = cls(*args, **kwargs)
        return __singleton[cls]
    
    return get_instance

@singleton
class Singleton2:
    def __init__(self):
        if not hasattr(self, '_initialized'):  # 防止重复初始化
            self._initialized = True
            print("init Singleton2")
            
# 元类
class SingletonMeta(type):
    __singleton = {}
    
    def __call__(cls, *args, **kwargs):
        if cls not in cls.__singleton:
            cls.__singleton[cls] = super().__call__(*args, **kwargs)
        return cls.__singleton[cls]
    
class Singleton3(metaclass=SingletonMeta):
    def __init__(self):
        if not hasattr(self, '_initialized'):  # 防止重复初始化
            self._initialized = True
            print("init Singleton3")
            
# 线程安全
class Singleton4:
    __singleton = None
    _lock = threading.Lock()
    
    def __init__(self):
        if not hasattr(self, '_initialized'):  # 防止重复初始化
            self._initialized = True
            print("init Singleton4")

    def __new__(cls, *args, **kwargs):
        if not cls.__singleton:
            with cls._lock:
                if not cls.__singleton:
                    cls.__singleton = super().__new__(cls)
        return cls.__singleton

