#include <stdio.h>
#include <stdlib.h>
#include "map.h"

int pair(int n){
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int *filter(int *tab, int n, int (*closir)()){

    int t[50] = {0}; 
    int j = 0;

    //t= (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        if (closir(tab[i]) == 1)
        {
            t[j] = tab[i];
        }
    }

    int *resTab = NULL;
    resTab = (int*)malloc(sizeof(int)*(j + 1));

    if (resTab == NULL)
        return NULL;

    int k = 0;

    for (k; k < j; k++)
    {
        resTab[k] = t[k];
    }
    
    resTab[k] = -1;

    return resTab;
}

void printTab(int * tab, int n){
    int i = 0;
    if(n){
        for (i; i < n; i++)
            printf("%d ", tab[i]);
        printf("\n");
    }else {
        while (*(tab + i) != -1){
            printf("%d ", *(tab + i)); 
            i++;
        }
        printf("\n");
    }
}
