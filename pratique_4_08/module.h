#ifndef __MODULE_H__
#define __MODULE_H__

#define TAILLE 5

enum jour {
    LUNDI = 1, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE
};

typedef enum jour JOUR;

float * creerTableau();
void afficherJour(JOUR unJour);

#endif