package strategy.duck;

import strategy.fly.FlyNoWay;
import strategy.quack.MuteQuack;

public class RubberDuck extends Duck{

    public RubberDuck() {
        flyBehavior = new FlyNoWay();
        quackBehavior = new MuteQuack();
    }

    @Override
    public void display() {
        System.out.println("RubberDuck");
    }
}
