#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "compte.h"

void *effectuerDepot(void *);

int main(){

    double soldeAvant = recupererSolde();
    printf("Solde avant = %.1f\n", soldeAvant);
    pthread_t thread1, thread2, thread3;

    double montant1 = 300;
    double montant2 = 100;
    double montant3 = 500;

    pthread_create(&thread1, NULL, effectuerDepot, (void *) &montant1);
    pthread_create(&thread2, NULL, effectuerDepot, (void *) &montant2);
    pthread_create(&thread3, NULL, effectuerDepot, (void *) &montant3);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);


    double soldeApres = recupererSolde();
    printf("Solde apres = %.1f\n", soldeApres);

}

void *effectuerDepot(void *montant){
    double *pMontant = (double *) montant;

    double solde = recupererSolde();
    double newSolde = solde + *pMontant;

    modifierSolde(newSolde);

    return NULL;
}

