#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


typedef struct 
{
SDL_Rect posScreen;
SDL_Rect posSprite;
SDL_Surface *sprite;
int direction;
}Ennemi;

void initanime(Ennemi * e, char url[]){
e->sprite = IMG_Load (url);
e->posSprite.x = 0;
e->posSprite.y = 0;
e->posSprite.w = e->sprite->w /3;
e->posSprite.h = e->sprite->h/4;
e->posScreen.y =200;
e->posScreen.x =500;
}
void showEnnemi (SDL_Surface  * screen, Ennemi * e){
SDL_BlitSurface (e->sprite, &(e->posScreen), screen, NULL);
}
/*void deplacement(Ennemi *e)
{
    if (e->posScreen.x> 100)
e->direction=0

else if (e->posScreen.x<50)
e->direction=3
else if()
    e->direction=1;
else if()
    e->direction=2;


if (e->direction=3)
e->posScreen.x++ ;
else if(e->direction=2)
e->posScreen.x-- ;
else if (e->direction=1)
e->posScreen.x++ ;
else if(e->direction=0)
e->posScreen.x-- ;
}*/
void annimeEnnemi(Ennemi * e)
{
    if (e->posSprite.x =e->sprite->w - e->posSprite.w)
e->posSprite.x =0;
else
    e->posSprite.x = e->posSprite.x + e->posSprite.w;



    e->posSprite.y=e->direction*e->posSprite.h;

}
/*int collisionBB(Personne p,Ennemi e)
{
    int collision;
    if ((p->posScreen.x + p->posSprite.w< e->posScreen.x) || (p->posScreen.x> e->posSprite.w + e->posScreen.x)
        ||(p->posScreen.y + p->posSprite.h< e->posScreen.y) ||(p->posScreen.y> e->posScreen.y+ e->posSprite.h ))

Collision = 0 // pas de collision
else
Collision = 1


return Collision;
}*/



int main (int argc, char *argv[]){

SDL_Init(SDL_INIT_VIDEO);
if( SDL_Init(SDL_INIT_VIDEO) !=0){

   printf("erreur initialisation %s \n", SDL_GetError());
   exit (1);
}
Ennemi e;
SDL_Event event;
SDL_Surface *surface, *background,*screen;
SDL_Rect positionbackground;

background=IMG_Load("background.bmp");
positionbackground.x=0;
positionbackground.y=0;


screen = SDL_SetVideoMode (1000,800 , 32,
SDL_HWSURFACE | SDL_DOUBLEBUF);

initanime(&e,"ennemi.png");
SDL_BlitSurface (e.sprite, NULL, screen, &(e.posScreen));
SDL_Flip (screen);
int continuer = 0;
SDL_EnableKeyRepeat (SDL_DEFAULT_REPEAT_DELAY,
SDL_DEFAULT_REPEAT_INTERVAL);
while (!continuer) {
while (SDL_PollEvent (&event)){
switch (event.type) {
case SDL_QUIT:
continuer = 1;
break;

}
}
annimeEnnemi(&e);
SDL_BlitSurface (e.sprite, NULL, screen, &(e.posScreen));
SDL_BlitSurface(background,NULL,screen, &positionbackground);
SDL_Flip (screen);
}
SDL_FreeSurface(screen);

SDL_FreeSurface(background);

}
