#include "module.h"

float * creerTableau(){
    static float tableau[TAILLE] = {2.5, 5.3, 6.2, 9.1, 4.0};

    return tableau;
}
