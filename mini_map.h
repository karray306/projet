#ifndef _FONCTIONS_H_
#define _FONCTIONS_H_





typedef struct minimap
{ 
  SDL_Surface* s ;
  SDL_Rect position ;
}minimap ; 

typedef struct curseur
{ 
  SDL_Surface* cu ;
  SDL_Rect position ;
}curseur ; 

               
minimap initialisation_minimap (minimap m) ;

curseur initialisation_curseur (curseur c) ; 

void afficher_minimap(minimap m,curseur c,SDL_Surface *ecran);

void mini_map(curseur * c ,SDL_Rect positionennemi);



#endif
