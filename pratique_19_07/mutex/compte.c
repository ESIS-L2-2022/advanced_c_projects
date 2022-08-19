#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "compte.h"

static double solde = 0;

double recupererSolde(){

    usleep(100000);
    return solde;
}

void modifierSolde(double newSolde){
    usleep(100000);
    solde = newSolde;
}