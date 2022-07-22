#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10
#define NB_ALEA_MAX 15

void initTabAlea(int tab[], int nbElements);
void afficherTab(int tableau[], int nbElements);
int chercherElementsCommuns(int *, int *, int *, int taille);
int verifierElemTab(int element, int tableau[], int taille);

int main(){
    int tab1[TAILLE], tab2[TAILLE], tabCommuns[TAILLE];

    srand(time(NULL));
    
    initTabAlea(tab1, TAILLE);
    initTabAlea(tab2, TAILLE); 

    afficherTab(tab1, TAILLE);
    afficherTab(tab2, TAILLE);

    int nb = chercherElementsCommuns(tab1, tab2, tabCommuns, TAILLE);
    if(nb > 0)
        afficherTab(tabCommuns, nb);
    else
        printf("Aucun element commun\n");

    return 0;
}

void initTabAlea(int tab[], int nbElements){
    int nbAlea;

    for (int i = 0; i < nbElements; i++)
    {
        nbAlea = rand() % NB_ALEA_MAX;
        tab[i] = nbAlea;
    }
}

void afficherTab(int tableau[], int nbElements){
    printf("[");
    for (int i = 0; i < nbElements; i++)
    {
        printf("%d", tableau[i]);
        if (i != nbElements - 1)
            printf(", ");
        
    }
    printf("]\n");
}

int chercherElementsCommuns(int tab1[], int tab2[], int tabCommuns[], int taille){
    int nbElemCommuns = 0;
    int i, j;

    for ( i = 0; i < taille; i++ )
    {
        for (j = 0; j < taille; j++)
        {
            if (tab1[i] == tab2[j])
            {
                if (!verifierElemTab(tab1[i], tabCommuns, nbElemCommuns))
                {
                    tabCommuns[nbElemCommuns] = tab1[i];
                    nbElemCommuns++;
                }
            }
        }
    }
    return nbElemCommuns;
}

int verifierElemTab(int element, int tableau[], int taille){
    int reponse = 0;
    for (int i = 0; i < taille; i++)
    {
        if (element == tableau[i])
        {
            reponse = 1;
            break;
        }
    }
    return reponse;
}