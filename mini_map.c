#include "map.h"

void initialiser_map (map *m,SDL_Surface *screen,pers *p)
{
	m->map=IMG_Load("miniback.jpeg");
	m->pos_map.x = 1000;
	m->pos_map.y = 500;

	m->mini_perso=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_DOUBLEBUF,10,10,32,0,0,0,0);
	SDL_FillRect(m->mini_perso,NULL,SDL_MapRGB(screen->format,0,0,255));
	m->perso_pos_map.x=0;
	m->perso_pos_map.y=0;

}


void perso_map(map *m,pers *p)
{
	m->perso_pos_map.x=p->pos_perso.x/10+m->pos_map.x;
	m->perso_pos_map.y=p->pos_perso.y/10+10+m->pos_map.y;
}


void affiche_map(map *m , SDL_Surface *screen,/*pers *p*/)
{
	SDL_BlitSurface(m->map, NULL, screen,&m->pos_map);
	SDL_BlitSurface(m->mini_perso, NULL, screen,&m->perso_pos_map);
}
