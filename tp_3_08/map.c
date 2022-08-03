#include <stdio.h>


void map(int tab[], int n, int (*closir)()){
    printf("Liste des Personnes :\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ans\n", closir(tab[i]));
    }
    printf("\n");
}