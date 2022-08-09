#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
#include <ctype.h>
#include "listSC.h"

void ajouterAuDebut(Element* refTete, Etudiant etudiant){
    Element nouveau = (Element)malloc(sizeof(struct element));

    nouveau->etudiant = etudiant;
    nouveau->next = (*refTete);
    (*refTete) = nouveau;
}

void ajouterALaFin(Element* refTete, Etudiant etudiant){
    Element nouveau = (Element)malloc(sizeof(struct element));
    Element dernier = *refTete;

    nouveau->etudiant = etudiant;
    nouveau->next = NULL;

    if (*refTete == NULL) {
        *refTete = nouveau;
        return;
    }

    while (dernier->next != NULL) dernier = dernier->next;

    dernier->next = nouveau;
    return;
}

void suprimer(Element* refTete, char *mat){
    Element element = *refTete, suiv;

    if (element != NULL && strcmp(element->etudiant.matricule, mat)) {
        *refTete = element->next;
        free(element);
        return;
    }

    while (element != NULL && !strcmp(element->etudiant.matricule, mat)) {
        suiv = element;
        element = element->next;
    }

    if (element == NULL) return;

    suiv->next = element->next;

    free(element);
}

void afficher(Element element){
    while (element != NULL) {
        printf("%s, %s, %s \n", element->etudiant.matricule, element->etudiant.nom, element->etudiant.postnom);
        element = element->next;
    }
}

void pause(){
    printf("\n... appuyer sur une touche pour retourner au menu...");
    //getch();
}

void quitter(){
    printf("\n... appuyer sur la touche  zero (0) pour  quitter...\n");
    exit(0);
}