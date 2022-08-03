#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "autre.h"

char * noms[] = {
    "Franck",
    "Benoit",
    "Ornella",
    "Ruth",
    "Josh",
    "Prospert",
    "Fabien",
    "Urcilla",
    "Rosny",
    "Peggy",
    "Meschack"
};

void initTab(int n, Personne *tab){
    srand(time(NULL));

    int aleaIndice;

    for (int i = 0; i < n; i++)
    {
        aleaIndice = rand() % 11;
        strcpy(tab[i].nom, noms[aleaIndice]);
        tab[i].age = (rand() % (27 - 19)) + 19;
    }
    
}

void printTab(int n, Personne *tab){
    printf("Liste des Personnes :\n");

    for (int i = 0; i < n; i++)
    {
        printf("\t%d) %s a %d ans\n", i+1, tab[i].nom, tab[i].age);
    }
    printf("\n");
    
}