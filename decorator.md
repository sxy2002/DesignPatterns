# 装饰者模式

## 定义
动态地将额外责任附加到对象上。对于扩展功能，装饰者提供子类化之外的弹性替代方案。

> ⭐ 设计原则
> - 类应该对扩展开发，但对修改关闭 -> 组件（包装的组件） + 装饰者（添加行为） （两者类型相同）

## 使用场景
- 继承滥用 -> 类爆炸、所有子类必须继承相同行为、僵硬的设计
- java.io InputStream

## 代码示例
星巴兹咖啡订单
- 咖啡类型：家常综合、深度烘培、低咖啡因、浓缩
- 调料类型：热奶、摩卡、豆奶、奶泡

![](img/decorator_pattern.svg)

- [Java实现](code/Java/decorator)
- [C++实现](code/C++/decorator)
- [Python实现](code/Python/decorator)
