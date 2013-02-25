#include "Main.h"

bool Main::OnInit(){

	if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
		return false;
	}

	if((Surf_Display = SDL_SetVideoMode(640,480,32,SDL_HWSURFACE | SDL_GL_DOUBLEBUFFER | SDL_OPENGL)) == NULL){
		return false;
	}

	SDL_GL_SetAttribute(SDL_GL_SWAP_CONTROL, 1);

	glEnable(GL_TEXTURE_2D);
	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER,.5f);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glViewport(0,0,640,480);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 640, 480, 0.0f, -1.0f, 1.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	return true;
}