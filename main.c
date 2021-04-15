#include "background.h"
int main (void)
{
    int continuee=1;
    SDL_Surface *b=NULL;
    SDL_Init(SDL_INIT_EVERYTHING);
    b= SDL_SetVideoMode(1280,800,32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Out Run", NULL);
    SDL_Event event;

if (b==NULL)
{
printf("error: %s ",SDL_GetError());
exit(EXIT_FAILURE);
}
while (continuee)
{
initBack(b);
scrolling(b);
}

SDL_FreeSurface(b);
}
