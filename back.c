#include "background.h"

void initBack(SDL_Surface *b)
{
Mix_Music *son;
SDL_Surface *image = NULL;
SDL_Init(SDL_INIT_EVERYTHING);
SDL_Rect positionb;
int volume ;


//musique
if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) //Initialisation de l'API Mixer
   {
      printf("%s", Mix_GetError());
   }
volume=MIX_MAX_VOLUME / 2;
Mix_VolumeMusic(volume); //Mettre le volume à la moitié
son = Mix_LoadMUS("music1.mp3"); //Chargement de la musique
Mix_PlayMusic(son, -1); //Jouer infiniment la musique
image=IMG_Load("background.png");

    positionb.x = 0;

    positionb.y = 0;
    /* On blitte par-dessus l'écran */
    SDL_BlitSurface(image, NULL, b, &positionb);

    SDL_Flip(b);
    SDL_FreeSurface(image); /* On libère la surface */

}


void scrolling(SDL_Surface *b)
{
SDL_Init(SDL_INIT_VIDEO);
SDL_Surface *map= NULL;
b= SDL_SetVideoMode(1280,800, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
int continuer=1;
const int speed=6;
int x,y;
x=0;
y=0;

SDL_Rect positionmap;
SDL_Rect camera;
SDL_Event event;

int i=0 , j= 0 ;

    map=IMG_Load("background.png");

    positionmap.x = 0;

    positionmap.y = 0;

camera.x=0;

camera.y=0;

camera.w=1366;

camera.h=678;
_Bool bb[4]={0,0};
SDL_EnableKeyRepeat(10,10);
while(continuer)

{

SDL_WaitEvent(&event);

switch(event.type)
{

case SDL_QUIT:
continuer=0;
break;


case SDL_KEYDOWN:

switch(event.key.keysym.sym)

{

case SDLK_ESCAPE:
  continuer=0;
break;

            case SDLK_RIGHT: // Flèche droite

camera.x+=speed;

break;

            case SDLK_LEFT: // Flèche gauche

camera.x-=speed;
break;

}
break;
}


SDL_BlitSurface(map,&camera,b,NULL);
SDL_Flip(b);
}
}
