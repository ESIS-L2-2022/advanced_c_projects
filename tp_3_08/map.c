#include <stdio.h>
#include <stdlib.h>
#include "map.h"

int pair(int n){
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

void filter(int *tab, int n, int (*closir)()){

    int *t, j = 0;
    t= (int*)malloc(n * sizeof(int));

    printf("Liste des pair :\n");

    for (int i = 0; i < n; i++)
    {
        if (closir(tab[i]) == 1)
        {
            t[j] = tab[i];
            printf("%d ", t[j]);
        }else
            printf("pas des nombres paire")
        
    }
    printf("\n");
}
