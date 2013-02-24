#ifndef _MAIN_H_
	#define _MAIN_H_

#include <SDL/SDL.h>

class Main {
private:
	bool Running;

	SDL_Surface* Surf_Display;

public:
	Main();

	int OnExecute();

public:
	bool OnInit();

	void OnEvent(SDL_Event* Event);

	void OnLoop();

	void OnRender();

	void OnCleanup();
};

#endif