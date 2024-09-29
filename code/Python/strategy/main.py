from duck.duck import MallardDuck, RedHeadDuck, RubberDuck
from fly.flybehavior import FlyRocketPower
from quack.quackbehavior import Squack

if __name__ == "__main__":
    mallardDuck = MallardDuck()
    mallardDuck.display()
    mallardDuck.swim()
    mallardDuck.performFly()
    mallardDuck.performQuack()
    
    redHeadDuck = RedHeadDuck()
    redHeadDuck.display()
    redHeadDuck.swim()
    redHeadDuck.performFly()
    redHeadDuck.performQuack()
    
    rubberDuck = RubberDuck()
    rubberDuck.display()
    rubberDuck.swim()
    rubberDuck.performFly()
    rubberDuck.performQuack()
    
    rubberDuck.setFlyBehavior(FlyRocketPower())
    rubberDuck.performFly()
    rubberDuck.setQuackBehavior(Squack())
    rubberDuck.performQuack()
    
    