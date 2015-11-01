all:shmwrite.exe shmread.exe
shmwrite.exe: shmwrite.o 
	gcc -o shmwrite.exe shmwrite.o -lm
shmread.exe: shmread.o 
	gcc -o shmread.exe shmread.o -lm
shmread.o:shmread.c shmdata.h
	gcc -c  shmread.c 
shmwrite.o:shmwrite.c shmdata.h
	gcc -c  shmwrite.c
clean:
	rm *.o 
