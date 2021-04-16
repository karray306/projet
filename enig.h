#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>

typedef struct 
{
 SDL_Surface * img;
 SDL_Rect 	p;
}enigme;

void init_enigme(enigme * e) ;
void  generer (SDL_Surface * screen  , char image [],enigme *e,int *alea) ;
 int solution (char image []) ;
int resolution (int * running,int *run);
void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *e) ;
