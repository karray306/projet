#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<stdio.h>
#include<stdlib.h>
#include"enigme.h"

int main ()
{


 // initialisation des ressources
SDL_Surface *screen=NULL;
TTF_Font *police=NULL;
SDL_color couleurnoire=(0,0,0);
Enigme O,e;
SDL_Event event;
int done=1;
while (done) 
{
afficherEnigme(enigme e,SDL_Surface *screen); // affichage enigme
O=Enigme generer(); // generation des questions reponses
float reponse ;


 while(SDL_PollEvent(&event)) //récuperation des events
          { 
             switch(event.type) 
           { 
               case SDL_QUIT;
                  done=0;
                BREAK; 

                 case SDL_KEYDOWN;
                   if(event.key.keysym.sym==SDLK_A)
                       { 
                          reponse =1; 
                        }
  if(event.key.keysym.sym==SDLK_B)
                       { 
                           reponse=2;
                        }
  if(event.key.keysym.sym==SDLK_C)
                       { 
                          reponse =3; 
                        }

if (reponse == e.reponseJuste) // la reponse 3 est toujours vrai 
{
 SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond
  //chargement de la police
police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte
texte=TTF_RenderText_Blended(POLICE,"FÉLICITATION",couleurnoire);

}
else // réponse fausse
{
 SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond
  //chargement de la police
police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte
texte=TTF_RenderText_Blended(POLICE,"GAME OVER",couleurnoire);
}
 TTF_CloseFont(police);
  TTF_Quit();
  SDL_FreeSurface(texte);
return 0;
}






