background: main.o back.o 
	gcc main.o back.o -o background -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf
main.o:main.c 
	gcc -c main.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf
back.o:back.c background.h 
	gcc -c back.c -lSDL -lSDL_mixer -lSDL_image -lSDL_ttf
	
