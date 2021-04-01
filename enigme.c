#include<SDL/SDL_image.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"enigme.h"
#include<string.h>
#include <math.h>

Enigme generer()
{
char S,X;
Enigme e;
float choix;

srand(time(NULL));
int A=rand()%10+1; // générer 3 nombres alea
int B=rand()%10+1;


char caractere[]="+-"; // générer un operand 
srand(time(NULL));
int R=rand()%2;
S=caractere[R];

char Resultat1[]=A; // transformation des entiers en une chaine de caractère
printf ("%c", Resultat1);

char Resultat2[]=B;
printf("%c", Resultat2);



char Resultat4[]=ch; // transformation du caractère en une chaine de caractère
printf ("%c", Resultat4);



strcat(Resultat1,X,Resultat4,Resultat2,=,0); // concatenation des chaines
strcpy(Resultat1,e.question); // remplissage de la question

e.reponseJuste = -B/A; // calcul le resultat de l'eq

e.reponse1= e.reponseJuste+2; // generation des rèponses 
e.reponse2= B/A;
e.reponse3= e.reponseJuste;
return e;
}



void afficherEnigme(enigme e,SDL_Surface *screen)
{
 SDL_Surface *screen=NULL;
 SDL_Rect positionecran;
image=NULL;
int continuer=1;
      if(SDL_Init(SDL_INIT_VIDEO) !=0)
        { 
             printf ("unable to initialize SDL %s\n",SDL_GetError());
             return 1;
            }
screen=SDL_SetVideo(largeur,hauteur,nombre de couleurs affichables,options);
if (screen== NULL)
     {  
            printf("unable to set video mode: %s\n", SDL_GetError());
            return 1;
image= SDL_LoadBMP("nomdufichier.bmp");
if(image==NULL)
    { printf("unable to load bitmap:%s\n",SDL_GetError());
      return 1;
     }
positionecran.x=0;
positionecran.y=0;

SDL_BlitSurface(image,NULL,screen,&positionecran);


SDL_Flip(screen);
SDL_Quit();
return 0;
}



