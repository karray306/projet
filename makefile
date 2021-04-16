prog:main.o fonction.o
	gcc main.c fonction.c -o prog -lSDL -lSDL_image 
main.o:main.c
	gcc -c main.c -lSDL -lSDL_image 
fonction.o:fonction.c
	gcc -c fonction.c -lSDL -lSDL_image 
