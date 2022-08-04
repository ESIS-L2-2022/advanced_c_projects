OBJ = main.o map.o
CC = gcc
EXEC = main

main : $(OBJ)
	@echo "Creating object"
	$(CC) -Wall $(OBJ) -o $(EXEC)

main.o : main.c
	$(CC) -c main.c

map.o : map.c
	$(CC) -c map.c

run : $(EXEC)
	./$(EXEC)

clean :
	rm *.o -rf