
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define pa 20
typedef struct
{
  	SDL_Surface *image_p;
  	SDL_Rect pos_perso;
}pers;

typedef struct 
{
	SDL_Surface *map ;
	SDL_Rect pos_map;
	SDL_Surface *mini_perso;
	SDL_Rect perso_pos_map;
}map ;



SDL_Color GetPixel ( SDL_Surface* pSurface , int x , int y)
{
    SDL_Color color;
    Uint32 col = 0;
    char *pPosition = (char *) pSurface ->pixels;
    pPosition += (pSurface ->pitch * y);
    pPosition += (pSurface->format->BytesPerPixel * x);
    memcpy (&col ,pPosition , pSurface->format->BytesPerPixel);
    SDL_GetRGB(col ,pSurface->format , &color.r , &color.g , &color.b);
    return (color) ;
}


//int main(int argc, char *argv[])
int collisionPP(pers p , SDL_Surface* masque)
{
 SDL_Color color;
          int collision = 0;
    
SDL_Surface *ecran = NULL/*, *pers = NULL*//*,*map=NULL*/,*bgc=NULL;
  /*  SDL_Rect positionmap,positionpers;
	positionmap.x=0;
	positionmap.y=0;
        positionpers.x=500;
        positionpers.y=500;*/
		map *m ;
	m->map=NULL
	masque=NULL;
	p->image_p=NULL;
	
	
	
	

	m->.pos_map.x =0;
	m->pos_map.y=0;
	p.pos_perso.x=500;
	p.pos_perso.y=500;
	
    SDL_Event event;
    int continuer = 1;


    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(1365,649,32, SDL_HWSURFACE||SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Gestion des événements en SDL", NULL);
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
    //map = IMG_Load("house.jpg") ;
    m->map = IMG_Load("house.jpg") ;
    bgc = IMG_Load("whitehouse.jpg") ;
   // pers = IMG_Load("droite.png");
 p->image_p = IMG_Load("droite.png");
	//SDL_BlitSurface(pers, NULL, ecran, &positionmap);
    SDL_BlitSurface( p->image_p , NULL, ecran, &positionmap);
	
    SDL_Flip(ecran);

   // SDL_SetColorKey(pers, SDL_SRCCOLORKEY, SDL_MapRGB(pers->format, 0, 0, 255));
SDL_SetColorKey(p->image_p , SDL_SRCCOLORKEY, SDL_MapRGB(p->image_p ->format, 0, 0, 255));
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;

            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP: // Flèche haut
			
		
			positionpers.y-=pa;
			//pers = IMG_Load("arriere.png");
				p->image_p  = IMG_Load("arriere.png");
                       // SDL_BlitSurface(pers, NULL, ecran, &positionpers);
				SDL_BlitSurface(p->image_p, NULL, ecran, &p.pos_perso);
			SDL_Flip(ecran);
			break;
                    
		    case SDLK_DOWN: // Flèche bas

                       // positionpers.y+=pa;
				 p.pos_perso.y+=pa;
			//pers = IMG_Load("avant.png");
				p->image_p  = IMG_Load("avant.png");
			//SDL_BlitSurface(pers, NULL, ecran, &positionpers);
				SDL_BlitSurface(p->image_p, NULL, ecran, &p.pos_perso);
			SDL_Flip(ecran);

                        break;
                    
		    case SDLK_RIGHT: // Flèche droite

			//positionpers.x+=pa;
				 p.pos_perso.x+=pa;
			//pers = IMG_Load("droite.png");
				p->image_p = IMG_Load("droite.png");
			//SDL_BlitSurface(pers, NULL, ecran, &positionpers);
				SDL_BlitSurface(p->image_p, NULL, ecran, &p.pos_perso);
			SDL_Flip(ecran);
                        break;
                    case SDLK_LEFT: // Flèche gauche

                       // positionpers.x-=pa;
				 p.pos_perso.x-=pa;
			//pers = IMG_Load("gauche.png");
				p->image_p= IMG_Load("gauche.png");
			//SDL_BlitSurface(pers, NULL, ecran, &positionpers);
				SDL_BlitSurface(p->image_p, NULL, ecran, &p.pos_perso);
			SDL_Flip(ecran);
                        break;
                }
                break;
        }

  if ((color.r == 255) && (color.g == 255) && (color.b == 255))

                {

                        collision = 1;

                }

                printf("%d \n",collision);

                 if(SDLK_UP) {

                       /* // positionpers.y--;*/

                      //  color= GetPixel(bgc, positionpers.x,positionpers.y);
				color= GetPixel(bgc,  p.pos_perso.x, p.pos_perso.y);
                        printf("red %d green %d blue %d \n",color.r,color.g,color.b);

                        if ((color.r != 255) && (color.g != 255) && (color.b != 255) && collision == 0)

                        {

                            // positionpers.y--;
				 p.pos_perso.y--;
                        } 

                        else 

                                {

                                // positionpers.y+=5; 
					 p.pos_perso.y+=5;
			            collision=0;

                             }

                        

                        

                        

                }

                if(SDLK_RIGHT) {

                    /*   //  positionpers.x--; */

                // color= GetPixel(bgc,  positionpers.x, positionpers.y);
			 color= GetPixel(bgc,  p.pos_perso.x, p.pos_perso.y);

                  printf("red %d green %d blue %d \n",color.r,color.g,color.b);

                  if ((color.r != 255) && (color.g != 255) && (color.b != 255) && collision == 0)

                        {

                           //  positionpers.x--;
				p.pos_perso.x--;
                        } 

                        else 

                        {

                        // positionpers.x+=5; 
				p.pos_perso.x+=5;
		        collision=0;

                             }



                        

                }

                if(SDLK_DOWN) {

                    /*   //  positionpers.y++;*/

                // color= GetPixel(bgc,  positionpers.x, positionpers.y);
			color= GetPixel(bgc, p.pos_perso.x, p.pos_perso.y);
                 printf("red %d green %d blue %d \n",color.r,color.g,color.b);

                 if ((color.r != 255) && (color.g != 255) && (color.b != 255) &&(color.r != 246) && (color.g != 246) && (color.b != 246) && collision == 0)

                        {

                            // positionpers.y++;
				p.pos_perso.y++;
                        } 

                        else {

                       //  positionpers.y-=5; 
				p.pos_perso.y-=5;
		        collision=0;

                             }



                       

                }

                if(SDLK_LEFT) {

                       //  positionpers.x++;

                // color= GetPixel(bgc,  positionpers.x, positionpers.y);
			 color= GetPixel(bgc, p.pos_perso.x, p.pos_perso.y);
                 printf("red %d green %d blue %d \n",color.r,color.g,color.b);

                 if ((color.r != 255) && (color.g != 255) && (color.b != 255) && collision == 0)

                        {

                            // positionpers.x++;
					p.pos_perso.x++;
                        } 

                        else 

                        {

                       //  positionpers.x-=5; 
				p.pos_perso.x-=5;
		        collision=0;

                             }



                       

                }



               if( p.pos_perso.x<0)

                { p.pos_perso..x=0;}

                 if(p.pos_perso.y<0)

                { p.pos_perso.y=0;}

    /* On efface l'écran */
        SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
        SDL_BlitSurface(bgc,NULL,ecran,&positionmap);
	//SDL_BlitSurface(map, NULL, ecran, &positionmap);   
	    SDL_BlitSurface(p->image_p, NULL, ecran, &m->pos_map);   
/* On place pers à sa nouvelle position */
       // SDL_BlitSurface(map, NULL, ecran, &positionmap);  
	    SDL_BlitSurface(p->image_p, NULL, ecran, &m->pos_map);   
        /* On met à jour l'affichage */
        SDL_Flip(ecran);
    }
   // SDL_FreeSurface(map);
	 SDL_FreeSurface(m);
SDL_FreeSurface(bgc);

   // SDL_FreeSurface(pers);
	SDL_FreeSurface(p);
    SDL_Quit();

    return EXIT_SUCCESS;
}
