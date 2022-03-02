#ifndef _DEMO_H_
#define _DEMO_H_

#include <SDL2/SDL.h>

/**
 * struct SDL_Instance - An instance of the window and renderer
 * @window:  Window in SDL2
 * @renderer:  Renderer in SDL2
 */

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *);

#endif
