
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"fonction.h"
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>

#include <SDL/SDL_image.h>

void initialiser_personnage(personnage *p)
{
    p->position.x=100;
    p->position.y=23;
    p->position.w=80;
    p->position.h=80;


  
    p->acceleration=5;
    p->vitesse=9;
    p->score=0;
    p->sol = 23;
   
}
void afficher_perso1(personnage p, SDL_Surface *ecran,SDL_Surface *background,SDL_Rect positionFond)
{
    SDL_BlitSurface(background, NULL, ecran, &positionFond);
    SDL_BlitSurface (p.sprite,NULL,ecran,&p.position);
SDL_Flip(ecran);

    
    
    
}


void animperso (int *i , SDL_Event *event, personnage *p)
{
 char ch[20];
    SDL_PollEvent(event);
    switch(event->type)
    {case SDL_KEYDOWN:
            switch(event->key.keysym.sym)
        {
case SDLK_RIGHT:
                (*i)++;
                if(*i>4)*i=1;
                sprintf(ch,"b%d.png",*i); 
                SDL_Delay(150);
                p->sprite = IMG_Load(ch);
                break;

            case SDLK_LEFT: 
		(*i)++;
                if(*i>4)*i=1;
                sprintf(ch,"c%d.png",*i);
                SDL_Delay(150);
                p->sprite = IMG_Load(ch);
                break;
        }
        break; }
}


void jump (personnage *p)
{ 
//int gravite = 1 ;
  
while( p->position.y!= p->sol) 
 p->position.y+=p->vitesse;

}

void deplacerperso (personnage *p,int *continuer, SDL_Event *event)
{
    SDL_PollEvent(event);
    switch(event->type)
    {
        case SDL_QUIT:
            (*continuer)=0;
            break;

        case SDL_KEYDOWN:
            switch(event->key.keysym.sym)
        {
case SDLK_ESCAPE:
(*continuer) = 0;
                 break;
 
            case SDLK_UP:
               if (p->position.y!=450)
                 { p->position.y-=p->vitesse;}
                break;
       
            case SDLK_RIGHT:
                p->position.x+=p->vitesse+p->acceleration*0.1;
                break;
            case SDLK_LEFT:
                p->position.x-=p->vitesse+p->acceleration*0.1;
                break;
                case SDLK_SPACE:
                 p->acceleration = 9;
                p->position.x+=p->vitesse+p->acceleration*0.1;
                break;
        }
            break;
            case SDL_KEYUP :
           if(event->key.keysym.sym==SDLK_UP)
              {
                jump(p);
           }

           if(event->key.keysym.sym==SDLK_RIGHT)

             {
while ( p->acceleration !=0)
              {
 p->acceleration--;
              p->position.x+=p->vitesse+p->acceleration*0.1; ;}
              }
       if(event->key.keysym.sym==SDLK_SPACE)
             {while ( p->acceleration !=0)
              { p->acceleration--;
              p->position.x+=p->vitesse+p->acceleration*0.1; ;}
              } 
            break;

    }
}

