package strategy.duck;

import strategy.fly.FlyWithWings;
import strategy.quack.Quack;

public class RedHeadDuck extends Duck{

    public RedHeadDuck() {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }

    @Override
    public void display() {
        System.out.println("RedHeadDuck");
    }
}
