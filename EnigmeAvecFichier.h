#include<SDL/SDL_image.h>
#include<stdio.h>
#include<stdlib.h>

typedef struct Enigme
{
char reponse1a[100];
char reponse1b[100];
char reponse1c[100]
char reponse1d[100]

char reponse2a[100];
char reponse2b[100];
char reponse2c;[100]
char reponse2d;[100]

char reponse3a[100];
char reponse3b[100];
char reponse3c;[100]
char reponse4d;[100]

char reponseJuste[100];
char reponseJuste1[100];
char reponseJuste2[100];
char reponseJuste3[100];
char question1[100];
char question2[100];
char question3[100];

}Enigme;

Enigme generer(enigme *e,char *fichier);
void afficherEnigme(enigme e,SDL_surface screen);


