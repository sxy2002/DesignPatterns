# 迭代器模式

## 定义
提供一种方式，可以访问一个聚合对象中的元素而又不暴露其潜在的表示。

> ⭐ 设计原则
> - 单一职责原则：一个类应该只有一个变化的原因
>   - Iterator遍历
> - 封装变化：迭代
> - 针对接口编程，而不是实现
> - 与客户解耦

## 使用场景
- Iterable（语法糖） -> Collection -> ArrayList、Vector、LinkedList、Stack、PriorityQueue

## 代码示例
餐厅菜单
- 煎饼屋菜单：ArrayList
- 餐厅菜单：Array
- 咖啡厅菜单：HashMap

