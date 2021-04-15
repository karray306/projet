#ifndef background_h
#define background_h
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

void initBack(SDL_Surface *b);
void aficherBack(SDL_Surface b,SDL_Surface *screen);
void scrolling(SDL_Surface *b );

#endif /* background_h */
