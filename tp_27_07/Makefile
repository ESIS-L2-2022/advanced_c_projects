
CC = gcc
EXEC = main
OBJ = main.o conversion.o demande.o
HEADERS = -I headers

main : $(OBJ)
	@echo "Creating object"
	$(CC) $(OBJ) -o $(EXEC)

main.o : main.c
	$(CC) -c main.c $(HEADERS)

conversion.o : conversion.c
	$(CC) -c conversion.c $(HEADERS)

demande.o : demande.c
	$(CC) -c demande.c $(HEADERS)

run : $(EXEC)
	./$(EXEC)

clean :
	rm *.o -rf