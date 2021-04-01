Enigme generer(enigme *e,char *fichier)
{

Enigme e;


srand(time(NULL));
int A=rand()%3; // générer 1 nombres alea
File* fichier=NULL;
fichier=fopen("fichier/question.txt","r"); //ouverture du fichier 
fichier=fopen("fichier/reponse.txt","r");
switch(A)
{
case 1: fscanf(f,"%s",e.question1);
	fscanf(f,"%s",e.reponse1);
break;
case 2: fscanf(f,"%s",e.question2);
	fscanf(f,"%s",e.reponse2);
break;
case 3: fscanf(f,"%s",e.question3);
	fscanf(f,"%s",e.reponse3);
break;
}
fscanf(f,"%s",e.question);
fscanf(f,"%s",e.question);
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

