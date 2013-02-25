#include "Main.h"

void Main::OnRender(){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glClearColor(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_GL_SwapBuffers();
}