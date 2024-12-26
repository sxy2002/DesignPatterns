# 模版方法模式

## 定义
在一个方法中定义一个算法的骨架，而把一些步骤延迟到子类。模板方法使得子类可以在不改变算法结构的情况下，重新定义算法中的某些步骤。

> ⭐ 设计原则
> - 父类集中算法结构（骨架），子类提供完整实现 -> 子类之间复用最大化
> - hook：缺省不做事的具体方法
>   - 变化点挂钩进算法
>   - 子类为抽象类做决定的能力
> - 好莱坞原则：不要调用我们，我们会调用你
>   - 防止高层组件和低层组件互相依赖
>   - 低层组件挂钩进系统，高层组件决定何时调用

## 使用场景
- 共性算法，只是作用对象不同
- sort 实现Comparable的compareTo()方法
- InputStream read()方法
- JFrame paint()钩子
- AbstractList get()、size()（subList()依赖这两个方法）

## 代码示例
星巴兹饮料冲泡
- 类型：咖啡、茶
- 行为：将水煮沸、[用水冲泡]、导入杯子、[(是否需要)加调料]

![](img/template_pattern.svg)

- [Java实现](code/Java/template)
- [C++实现](code/C++/template)
- [Python实现](code/Python/template)
