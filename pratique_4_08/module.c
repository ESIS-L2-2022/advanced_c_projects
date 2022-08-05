#include "module.h"

float * creerTableau(){
    static float tableau[TAILLE] = {2.5, 5.3, 6.2, 9.1, 4.0};

    return tableau;
}

void afficherJour(JOUR unJour){
    switch (unJour){
        case LUNDI:
            puts("Lundi");
            break;
        
        case MARDI:
            puts("Mardi");
            break;
        
        case MERCREDI:
            puts("Mercredi");
            break;
        
        case JEUDI:
            puts("Jeudi");
            break;
        
        case VENDREDI:
            puts("Vendredi");
            break;
        
        case SAMEDI:
            puts("Samedi");
            break;

        case DIMANCHE:
            puts("Dimanche");
            break;

        default: puts("Jour incorrecte");
            break;
    }
}
