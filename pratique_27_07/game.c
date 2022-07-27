#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"
#include "game.h"
#define MAX_ALEA 100

int devinerNombre(int nombAlea){
    int nombDev;
    printf("Deviner le nombre: ");
    scanf("%d", &nombDev);

    if (nombDev == nombAlea){
        printf("Bingo ! vous avez trouve\n");
        return 1;
    }else {
        if (nombDev < nombAlea)
        {
            printf("Nombre inferieur\n");
        }else{
            printf("Nombre superieur\n");
        }
        return 0;
    }
}

void demarrerJeu(){

    srand(time(NULL));
    int nombre = genererNombrealea(MAX_ALEA);
    int resultat;

    do
    {
        resultat = devinerNombre(nombre);
    } while (!resultat);
    
}