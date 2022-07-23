#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10
#define NB_ALEA_MAX 15

void initTabAlea(int tab[], int nbElements);
void afficherTab(int tableau[], int nbElements);
int verifierElemTab(int element, int tableau[], int taille);
int ElementsDifferTab1(int *, int *, int *, int taille);
int ElementsDifferTab2(int *, int *, int *, int taille);
void afficherTabDif(int tab1[], int tab2[], int tabCommuns[], int taille);

int main(){
    int tab1[TAILLE], tab2[TAILLE], tabCommuns[TAILLE], tabDif1[TAILLE], tabDif2[TAILLE];

    srand(time(NULL));
    
    initTabAlea(tab1, TAILLE);
    initTabAlea(tab2, TAILLE); 

    printf("le premier tableau : ");
    afficherTab(tab1, TAILLE);
    printf("le deuxieme tableau : ");
    afficherTab(tab2, TAILLE);

    printf("Elements different tableau 1 : ");
    int nb1 = ElementsDifferTab1(tab1, tab2, tabDif1, TAILLE);
    if(nb1 > 0)
        afficherTab(tabDif1, nb1);
    else
        printf("Aucun element commun\n");

    printf("Elements different tableau 2 : ");
    int nb2 = ElementsDifferTab2(tab1, tab2, tabDif2, TAILLE);
    if(nb2 > 0)
        afficherTab(tabDif2, nb2);
    else
        printf("Aucun element commun\n");  

    //afficherTabDif(tab1, tab2, tabCommuns, TAILLE);

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

int ElementsDifferTab1(int tab1[], int tab2[], int tabCommuns[], int taille){
    int nbElemDufferent = 0;
    int i, j;

    for ( i = 0; i < taille; i++ )
    {
        for (j = 0; j < taille; j++)
        {
            if (tab1[i] != tab2[j])
            {
                if (!verifierElemTab(tab1[i], tabCommuns, nbElemDufferent))
                {
                    tabCommuns[nbElemDufferent] = tab1[i];
                    nbElemDufferent++;
                }else {
                    tabCommuns[nbElemDufferent] = tabCommuns[nbElemDufferent + 1];
                    nbElemDufferent--;
                }
                
            }
        }
    }
    return nbElemDufferent;
}

int ElementsDifferTab2(int tab1[], int tab2[], int tabCommuns[], int taille){
    int nbElemDufferent = 0;
    int i, j;

    for ( i = 0; i < taille; i++ )
    {
        for (j = 0; j < taille; j++)
        {
            if (tab2[i] != tab1[j])
            {
                if (!verifierElemTab(tab2[i], tabCommuns, nbElemDufferent))
                {
                    tabCommuns[nbElemDufferent] = tab2[i];
                    nbElemDufferent++;
                }else {
                    tabCommuns[nbElemDufferent] = tabCommuns[nbElemDufferent + 1];
                    nbElemDufferent--;
                }
            }
        }
    }
    return nbElemDufferent;
}

void afficherTabDif(int tab1[], int tab2[], int tabCommuns[], int taille){
    printf("Elements different tableau 1 : ");
    int nb = ElementsDifferTab1(tab1, tab2, tabCommuns, taille);
    if(nb > 0)
        afficherTab(tabCommuns, nb);
    else
        printf("Aucun element commun\n");

    printf("Elements different tableau 2 : ");
    int nb2 = ElementsDifferTab2(tab1, tab2, tabCommuns, taille);
    if(nb2 > 0)
        afficherTab(tabCommuns, nb2);
    else
        printf("Aucun element commun\n");  
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