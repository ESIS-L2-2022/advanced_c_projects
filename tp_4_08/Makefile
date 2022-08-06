OBJ = main.o listSC.o
EXEC = prog

$(EXEC) : ${OBJ}
	gcc ${OBJ} -o $(EXEC)

%.o : %.c
	gcc -c $<

run : $(EXEC)
	./$(EXEC)

clean :
	rm *.o -rf