#ifndef __UTILS_H__
#define __UTILS_H__

/**
 * 
 * * phases compilation en c
 * ---------------------------
 * ! 1 Traitement du preprocesseur -> gcc -E file.c
 * ! 2 Generer le code assembleur (.s) -> gcc -S file.c
 * ! 3 Generer le cede objet (.o) -> gcc -c file.c
 * ! 4 Edition des liens (.exe sur win) ->
 * ? gcc file.c -o exec : a partir du fichier source
 * ? gcc file.o -o exec : a partir du fichier objet
 * 
 */

int genererNombrealea(int borneSup);

#endif