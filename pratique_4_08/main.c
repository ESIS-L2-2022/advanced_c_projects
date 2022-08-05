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

    int rep;

    printf("Entrez le numero d'un Jour\n");
    scanf("%d", &rep);

    afficherJour(rep);
    
    return 0;
}