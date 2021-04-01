#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "karray.h"
void initanime(Ennemi * e, char url[]){
e->sprite = IMG_Load (url);
e->posSprite.x = 0;
e->posSprite.y = 0;
e->posSprite.w = url->w/3;
e->posSprite.h = e->sprite->h/4;
e->posScreen.x =75;
e->posScreen.x =180;
}
void showEnnemi (SDL_Surface * screen, Ennemi e){
SDL_BlitSurface (e.sprite, &(e.posScreen), screen, NULL);
}
void deplacement(Ennemi *e)
{
    if (e->posScreen.x> 100)
e->direction=0;

else if (e->posScreen.x<50)
e->direction=3;
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
}
void annimeEnnemi(Ennemi * e,char url[])
{
    if (e->posSprite.x =url->w - e->posSprite.w)
posSprite.x =0;
else
    e->posSprite.x = e->posSprite.x + e->posSprite.w



    e->posSprite.y=e->direction*e->posSprite.h;

}
int collisionBB(personne p,Ennemi e)
{
    int collision;
    if ((p->posScreen.x + p->posSprite.w< e->posScreen.x) || (p->posScreen.x> e->posSprite.w + e->posScreen.x)
        ||(p->posScreen.y + p->posSprite.h< e->posScreen.y) ||(p->posScreen.y> e->posScreen.y+ e->posSprite.h ))

Collision = 0 ;// pas de collision
else
Collision = 1;


return Collision;
}
