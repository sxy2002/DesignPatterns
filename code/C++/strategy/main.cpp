#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"

int main()
{
	Duck *mallardDuck = new MallardDuck();
	mallardDuck->dispaly();
	mallardDuck->swim();
	mallardDuck->performFly();
	mallardDuck->performQuack();

	Duck *redHeadDuck = new RedHeadDuck();
	redHeadDuck->dispaly();
	redHeadDuck->swim();
	redHeadDuck->performFly();
	redHeadDuck->performQuack();

	Duck *rubberDuck = new RubberDuck();
	rubberDuck->dispaly();
	rubberDuck->swim();
	rubberDuck->performFly();
	rubberDuck->performQuack();

	rubberDuck->setFlyBehavior(new FlyRocketPower());
	rubberDuck->performFly();
	rubberDuck->setQuackBehavior(new Squack());
	rubberDuck->performQuack();

	delete mallardDuck;
	delete redHeadDuck;
	delete rubberDuck;

	return 0;
}