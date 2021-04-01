#include<SDL/SDL_image.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct Enigme
{
char question[100];
float reponse1;
float reponse2;
float reponse3;
float reponseJuste;
}Enigme;

Enigme generer();
void afficherEnigme(enigme e,SDL_Surface screen);
