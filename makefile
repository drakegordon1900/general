main:main.o
	gcc -g3 -Wall main.o -o main.exe
main.o:main.c
	gcc -g3 -Wall -c main.c -o main.o
clear:
	del *.o
clean:
	del *.o *.exe