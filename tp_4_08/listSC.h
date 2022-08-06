#ifndef __LISTSC_H__
#define __LISTSC_H__

typedef struct etudiant{
    char matricule[8];
    char nom[25];
    char postnom[25];
} Etudiant;

typedef struct element{
    Etudiant etudiant;
    struct element * next;
} *Element;

void ajouterAuDebut(Element* refTete, Etudiant etudiant);
void ajouterALaFin(Element* refTete, Etudiant etudiant);
void suprimer(Element* refTete, char *mat);
void trier(Element* refTete);
void afficher(Element element);
void pause();
void quitter();

#endif