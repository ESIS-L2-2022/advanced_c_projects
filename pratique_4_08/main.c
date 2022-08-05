#include <stdio.h>
#include "module.h"

extern int variableGlobale;

int main(void){

    float * tab = creerTableau();

    for (int i = 0; i < TAILLE; i++)
    {
        printf("%.1f  ", tab[i]);
    }
    printf("\n---------- %d -------------\n", variableGlobale);
    
    return 0;
}