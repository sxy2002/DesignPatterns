# 单件模式

## 定义
确保一个类只有一个实例，并提供一个全局访问点。

> ⭐ 设计原则
> - 只有一个实例 + 全局访问 -> 私有构造器 + static

## 使用场景
- 程序异常、资源使用过量、结果不一致
- 线程池、缓存、对话框、处理偏好、注册表、对象日志、打印机显卡等设备驱动程序

## 代码示例
- Early Instantiation
  - 全局变量，启动时创建（资源密集型应用不适用）
  - 枚举（无多个类加载器、反射、序列化/反序列化问题）
- Lazy Instantiation
  - 经典方法（线程不安全）
  - 每次都同步（性能差）
  - 双重检查加锁（Java5以上）
  - 静态内部类

![](img/singleton_pattern.svg)

- [Java实现](code/Java/singleton)
- [C++实现](code/C++/singleton)
- [Python实现](code/Python/singleton)
