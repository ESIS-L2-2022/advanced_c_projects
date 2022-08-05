##########################################
# cible : dependance1 dependande2 ...	 #
#	commande1							 #
#	commande2							 #
# $< : represente la 1ere dependance     #
# $^ : represente toutes les dependances #
##########################################


OBJ = main.o module.o autre.o
EXEC = prog

$(EXEC) : ${OBJ}
	gcc ${OBJ} -o $(EXEC)

%.o : %.c
	gcc -c $<

run : $(EXEC)
	./$(EXEC)

clean :
	rm *.o -rf