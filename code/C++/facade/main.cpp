#include "hometheaterfacade.h"

int main()
{
	Light *light = new Light();
	PopcornPopper *popcornPopper = new PopcornPopper();
	Screen *screen = new Screen();
	Amplifier *amplifier = new Amplifier();
	StreamingPlayer *player = new StreamingPlayer(amplifier);
	Projector *projector = new Projector(player);

	HomeTheaterFacade *facade = new HomeTheaterFacade(light, popcornPopper, screen, projector, amplifier, player);
	facade->watchMovie("Titanic");
	facade->endMovie();

	delete facade;
	delete light;
	delete popcornPopper;
	delete screen;
	delete amplifier;
	delete player;
	delete projector;

	return 0;
}