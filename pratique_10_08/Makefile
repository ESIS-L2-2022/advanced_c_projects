OBJ = main.o module.o
SRC = main.c
EXEC = prog

$(EXEC) : ${OBJ}
	gcc ${OBJ} -o $(EXEC)

%.o : %.c
	gcc -c $<

prep : 
	gcc -E ${SRC}

run : $(EXEC)
	./$(EXEC)

clean :
	rm *.o -rf