#ifndef HMOETHEATERFACADE_H
#define HMOETHEATERFACADE_H

#include "light.h"
#include "poppcorn.h"
#include "screen.h"
#include "ampifier.h"
#include "projector.h"
#include "streamingplayer.h"

class HomeTheaterFacade
{
private:
	Light *light;
	PopcornPopper *popcornPopper;
	Screen *screen;
	Projector *projector;
	Amplifier *amplifier;
	StreamingPlayer *player;
public:
	HomeTheaterFacade(Light * const l, PopcornPopper * const po,
		Screen * const s, Projector * const pr,	Amplifier * const a,
		StreamingPlayer * const pl) :light(l), popcornPopper(po), screen(s),
		projector(pr), amplifier(a), player(pl)	{}

	void watchMovie(const std::string &movie) {
		std::cout << "watch Movie" << std::endl;
		popcornPopper->on();
		popcornPopper->pop();
		light->dim(10);
		screen->down();
		projector->on();
		projector->wideScreenMode();
		amplifier->on();
		amplifier->setStreamingPlayer(player);
		amplifier->setSurroundSound();
		amplifier->setVolume(12);
		player->on();
		player->play(movie);
	}

	void endMovie() {
		std::cout << "end Movie" << std::endl;
		popcornPopper->off();
		light->on();
		screen->up();
		projector->off();
		amplifier->off();
		player->stop();
		player->off();
	}
};

#endif