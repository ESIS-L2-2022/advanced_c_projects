# Syntaxe
# -------
# cible : dependances
#	commande #! Utiliser obligatoirement la tiuche TAB

main : main.o game.o utils.o
	gcc main.o game.o utils.o -o main
	
main.o : main.c
	gcc -c main.c

game.o : game.c
	gcc -c game.c

utils.o : utils.c
	gcc -c utils.c
