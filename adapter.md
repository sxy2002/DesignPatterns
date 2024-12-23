# 适配器模式

## 定义
将一个类的接口转换成客户期望的另一个接口。适配器让原本接口不兼容的类可以合作。
- 对象适配器：被适配者及其子类
- 类适配器：不需重新实现整个被适配者、覆盖被适配者的行为

> ⭐ 设计原则
> - 客户和被适配者解耦 -> 适配器（封装变化） -> 实现目标接口 + 持有被适配者实例（对象组合）
> - 客户的接口绑定，而不是和实现

## 使用场景
- 把一个接口适配成符合客户期望的接口（中间人）
- Enumeration、Iterator

## 对比
- 装饰者模式
  - 拓展所包装对象的责任或行为，无需修改现有代码
  - 不改接口
- 适配器模式
  - 转换接口，无需修改现有代码

## 代码示例
鸭塘模拟游戏（续）
- 鸭子：quack、fly
- 火鸡：gobble、short fly
- 鸭子适配器包装火鸡、火鸡适配器包装鸭子

![](img/adapter_pattern.svg)

- [Java实现](code/Java/adapter)
- [C++实现](code/C++/adapter)
- [Python实现](code/Python/adapter)
