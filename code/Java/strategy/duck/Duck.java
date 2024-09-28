package strategy.duck;

import strategy.fly.FlyBehavior;
import strategy.quack.QuackBehavior;

public abstract class Duck {
    // 同一个包可以访问
    FlyBehavior flyBehavior;
    QuackBehavior quackBehavior;

    public Duck()   {}

    public abstract void display();
    public void swim() {
        System.out.println("swim");
    }

    public void performFly() {
        flyBehavior.fly();
    }

    public void performQuack() {
        quackBehavior.quack();
    }

    public void setFlyBehavior(FlyBehavior f) {
        flyBehavior = f;
    }

    public void setQuackBehavior(QuackBehavior q) {
        quackBehavior = q;
    }
}
