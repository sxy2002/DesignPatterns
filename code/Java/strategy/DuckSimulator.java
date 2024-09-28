package strategy;

import strategy.duck.Duck;
import strategy.duck.MallardDuck;
import strategy.duck.RedHeadDuck;
import strategy.duck.RubberDuck;
import strategy.fly.FlyRocketPower;
import strategy.quack.Squack;

public class DuckSimulator {
    public static void main(String[] args) {
        Duck mallardDuck = new MallardDuck();
        mallardDuck.display();
        mallardDuck.swim();
        mallardDuck.performFly();
        mallardDuck.performQuack();

        Duck redHeadDuck = new RedHeadDuck();
        redHeadDuck.display();
        redHeadDuck.swim();
        redHeadDuck.performFly();
        redHeadDuck.performQuack();

        Duck rubberDuck = new RubberDuck();
        rubberDuck.display();
        rubberDuck.swim();
        rubberDuck.performFly();
        rubberDuck.performQuack();

        rubberDuck.setFlyBehavior(new FlyRocketPower());
        rubberDuck.performFly();
        rubberDuck.setQuackBehavior(new Squack());
        rubberDuck.performQuack();
    }
}
