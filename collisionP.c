
#include <stdio.h>
#include  <stdlib.h>
 #include  <SDL/SDL.h>
 #include <SDL/SDL_image.h>
 #include <stdbool.h>
#include "game.h"
 #include <math.h>
 
int Collision_Parfaite(SDL_Surface *Background,Coordinate C)
{
 int collision=0;
 SDL_Color color ;


 SDL_GetRGB(getpixel(Background,C),Background->format,&color.r,&color.g,&color.b);

 if (color.r==0 && color.g==0 && color.b==0)
 {collision=1;}

 return collision;

}
