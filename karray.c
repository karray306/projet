#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
int main()
{
int continuer=1;
int w,h;
int colision=1;
SDL_Event event;
SDL_Surface *screen=NULL;
SDL_Surface *image=NULL,*dali=NULL,*obstacle=NULL;
SDL_Rect position_ecran,positiondali,positionob;
position_ecran.x=0;
position_ecran.y=0;
positiondali.x= 200;
positiondali.y= 150;
positionob.x=300;
positionob.y=200;
image=IMG_Load("background(1).bmp");
dali = IMG_Load("p.png");
obstacle = IMG_Load("v.jpg");
SDL_SetColorKey(dali, SDL_SRCCOLORKEY, SDL_MapRGB(dali->format, 255, 255, 255));
SDL_SetColorKey(obstacle, SDL_SRCCOLORKEY, SDL_MapRGB(obstacle->format, 255, 255, 255));
SDL_Init(SDL_INIT_VIDEO);
screen=SDL_SetVideoMode(800,683,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
SDL_EnableKeyRepeat(20,20);
while(continuer){
SDL_PollEvent(&event);
switch(event.type)
    {
        case SDL_QUIT:
            continuer = 0;
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    continuer = 0;
                    break;
             case SDLK_UP:
               positiondali.y-=10;
SDL_WaitEvent(&event);
break;
case SDLK_DOWN:
positiondali.y+=10;
SDL_WaitEvent(&event);
break;
case SDLK_RIGHT:
positiondali.x+=10;
SDL_WaitEvent(&event);
break;
case SDLK_LEFT:
positiondali.x-=10;
SDL_WaitEvent(&event);
break;
            break;
}
}
if(positiondali.x + positiondali.w<positionob.x && positiondali.x> positionob.x + positionob.w && positiondali.y + positiondali.h < positionob.y && positiondali.y> positionob.y + positionob.h)
{colision=0;}
else 
{colision=1;}
SDL_BlitSurface(image,NULL,screen,&position_ecran);
SDL_BlitSurface(dali,NULL,screen,&positiondali);
SDL_BlitSurface(obstacle,NULL,screen,&positionob);
SDL_Flip(screen);
}
SDL_FreeSurface(dali);
SDL_FreeSurface(image);
SDL_Quit();
 return 0;
}
