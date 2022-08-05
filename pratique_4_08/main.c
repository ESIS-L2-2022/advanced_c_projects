#include <stdio.h>
#include "module.h"

typedef struct sPoint{
    int x;
    int y;

    struct{
        int z;
    };
} structPoint;

typedef union uPoint{
    int x;
    int y;
} unionPoint;


int main(){
    unionPoint p;

    p.x = 10;
    p.y = 15;

    printf("%d ", p.x);

    return 0;
}

/*
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
}*/