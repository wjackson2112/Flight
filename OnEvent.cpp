#include "Main.h"

void Main::OnEvent(SDL_Event* Event){
	if(Event->type == SDL_QUIT){
		Running = false;
	}
}