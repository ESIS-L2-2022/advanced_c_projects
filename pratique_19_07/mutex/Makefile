CFLAGS = -g -pthread
OBJ = main.o compte.o

main : ${OBJ}
	gcc ${CFLAGS} ${OBJ} -o main

main.o : main.c
	gcc ${CFLAGS} -c main.c

compte.o : compte.c
	gcc ${CFLAGS} -c compte.c

run : main
	./main

clean :
	rm *.o -rf