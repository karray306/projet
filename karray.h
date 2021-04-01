#include <SDL/SDL.h>
#define CAMERA_W 100
#define CAMERA_H 200
struct Ennemi
{
SDL_Rect posScreen;
SDL_Rect posSprite;
SDL_Surface *sprite;
int direction;
};
struct personne
{
SDL_Rect pospersonne;
SDL_Surface pospersonne;
};
typedef struct personne personne;
typedef struct Ennemi Ennemi;
void initanime(Ennemi * e, char url[]);
void showEnnemi (SDL_Surface * screen, Ennemi e);
void deplacement(Ennemi *e);
void annimeEnnemi(Ennemi * e,char url[]);
int collisionBB(Personne p,Ennemi e);
