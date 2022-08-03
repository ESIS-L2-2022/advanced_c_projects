OBJ = main.o autre.o
CC = gcc
EXEC = main

main : $(OBJ)
	@echo "Creating object"
	$(CC) -Wall $(OBJ) -o $(EXEC)

main.o : main.c
	$(CC) -c main.c

autre.o : autre.c
	$(CC) -c autre.c

run : $(EXEC)
	./$(EXEC)

clean :
	rm *.o -rf