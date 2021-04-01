#include<SDL/SDL.h>

#include<SDL/SDL_image.h>

#include<SDL/SDL_ttf.h>

#include<stdio.h>

#include <string.h>

#include<stdlib.h>

#include"EnigmeAvecFichier.h"

int main()

{

 //initialitation des resources

SDL_Surface *screen=NULL;

TTF_Font *police=NULL;

SDL_color couleurnoir=(0,0,0);

enigme e ;

char *fichier;

char reponse[50];

SDL_Event event;

int done=1;


while(done)

{

afficherEnigme(e,*screen); // affichage enigme

A=Enigme generer (*e,*fichier); //generation des questions reponses

char reponse1[100];

char reponse2[100];

char reponse3[100];

strcat(ReponseJuste1,reponse1a);
strcat(ReponseJuste2,reponse2b);
strcat(ReponseJuste,reponse3c);

while(SDL_PollEvent(&event)) //récuperation des events

          {

             switch(event.type)

           {

               case SDL_QUIT:

                  done=0;

                BREAK;

                 case SDL_KEYDOWN:

                   if(event.key.keysym.sym==SDLK_A)

                       {

                           strcat (reponse1 , reponse1a);

                        }

                 if(event.key.keysym.sym==SDLK_B)

                       {

                           strcat (reponse1 , reponse1b);

                        }

                 if(event.key.keysym.sym==SDLK_C)

                       {

                         strcat (reponse1 , reponse1c);

                        }



if(event.key.keysym.sym==SDLK_D)

                       {

                           strcat (reponse1 , reponse1d);

                        }

                   if(event.key.keysym.sym==SDLK_E)

                       {

                          strcat (reponse2 , reponse2a);

                        }

                   if(event.key.keysym.sym==SDLK_F)

                       {

                            strcat (reponse2 , reponse2b);

                        }


if(event.key.keysym.sym==SDLK_G)

                       {

                            strcat (reponse2 , reponse2c);

                        }

                   if(event.key.keysym.sym==SDLK_H)

                       {

                        strcat (reponse2 , reponse2d);

                        }

                   if(event.key.keysym.sym==SDLK_I)

                       {

                          strcat (reponse3 , reponse3a);

                        }

    if(event.key.keysym.sym==SDLK_J)

                       {

                            strcat (reponse3 , reponse3b);

                        }

   if(event.key.keysym.sym==SDLK_K)

                       {

                            strcat (reponse3 , reponse3c);

                        }

   if(event.key.keysym.sym==SDLK_L)

                       {

                         strcat (reponse3 , reponse3d);

                        }

if (strcmp(reponse1,reponseJuste1)==0)

{

SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond

  //chargement de la police

police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte

texte=TTF_RenderText_Blended(POLICE,"FÉLICITATION ",couleurnoire);

}

else 

{

 SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond

  //chargement de la police

police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte

texte=TTF_RenderText_Blended(POLICE,"GAME OVER",couleurnoire);

}

if (strcmp(reponse2,reponseJuste2)==0)

{

SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond

  //chargement de la police

police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte

texte=TTF_RenderText_Blended(POLICE,"FÉLICITATION ",couleurnoire);

}

else 

{

 SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond

  //chargement de la police

police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte

texte=TTF_RenderText_Blended(POLICE,"GAME OVER",couleurnoire);

}

if ( (strcmp(reponse3,reponseJuste3)==0)

{

SDL_BlitSurface(fond,NULL,ecran,&position); //blit du fond

  //chargement de la police

police=TTF_OpenDont("POLICE.TTF",TAILLE);

   //ecriture du texte

texte=TTF_RenderText_Blended(POLICE,"FÉLICITATION vous avez réussi l’enigme",couleurnoire);

}

else 

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

}
