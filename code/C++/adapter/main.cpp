#include "duck.h"
#include "mallardduck.h"
#include "turkey.h"
#include "wildturkey.h"
#include "turkeyadapter.h"
#include "duckadapter.h"

int main() 
{
	Duck *duck = new MallardDuck();
	Turkey *turkey = new WildTurkey();
	duck->quack();
	duck->fly();
	turkey->gobble();
	turkey->fly();

	Duck *duckT = new TurkeyAdapter();
	duckT->quack();
	duckT->fly();

	Turkey * turkeyD = new DuckAdapter(duck);
	turkeyD->gobble();
	turkeyD->fly();

	delete turkeyD;
	delete duckT;
	delete turkey;
	delete duck;
	return 0;
}