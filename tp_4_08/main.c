#include <stdio.h>
//#include <conio.h>
#include <ctype.h>

#include "listSC.h"

int main() {

    /*int rep, reponse = 0;
    do{
        system("cls");
        printf("\n");
        printf("\t\t\t\tGESTION D'UN ANNUAIRE \n\n\n");
        printf ("\t\t===========================<<<<<<<<<<<!!!!!>>>>>>>>>>>============================\n\n");
        printf ("\t\t{}                                                                               {} \n");
        printf ("\t\t{}  [1] : ==========<<<<<<<  ACQUISITION                          >>>>>>========      {} \n");
        printf ("\t\t{}  [2] : ==========<<<<<<<  AJOUTER UNE PERSONNE                 >>>>>>========      {} \n");
        printf ("\t\t{}  [3] : ==========<<<<<<<  AFFICHER LES PERSONNES DE L'ANNUAIRE >>>>>>========      {} \n");
        printf ("\t\t{}  [4] : ==========<<<<<<<  RECHERCHER UN NUMERO                 >>>>>>========      {} \n");
        printf ("\t\t{}  [5] : ==========<<<<<<<  RECHERCHER UN NOM                    >>>>>>========      {} \n");
        printf ("\t\t{}  [6] : ==========<<<<<<<  EFFACE                               >>>>>>========      {} \n");
        printf ("\t\t{}  [7] : ==========<<<<<<<  QUITTER                              >>>>>>========      {} \n");
        printf ("\t\t{}                                                                               {} \n");
        printf ("\t\t============================<<<<<<<<<<!!!!!>>>>>>>>>>>===========================\n\n");
        printf("Veuillez faire votre choix : ");
        scanf ("%d",&rep);
        fflush(stdin);
        //system("cls");
        system("clear");

        switch(rep){
            case 1:
                system("clear");
                printf("\t\t\tAJOUTER NOUVELLE PERSONNE\n\n");
                ajoute();
                break;
            case 2:
                printf("\t\t\tAFFICHER LES PERSONNES PAR ORDRE ALPHABETIQUE\n\n");
                affiche(annuaire);
                break;
            case 3:
                printf("\t\t\tSUPPRIMER LES PERSONNES PAR ORDRE ALPHABETIQUE\n\n");
                
                break;
            case 4:
                printf("\t\t\tRECHERCHER LE NUMERO D'UNE PERSONNE\n\n");
                
                break;
            case 5:
                printf("\t\t\tRECHERCHER LE NOM D'UNE PERSONNE\n\n");
                
                break;
            case 6:
                quitter();
                break;
            default:
                printf("\n choix incorrect");
        }
        pause();
    }while(1);

    //getch();

    return 0;*/

    Element tete = NULL;
    Etudiant etud1 = {"19MM375", "Muteba", "Muleshi"};
    Etudiant etud2 = {"37JM195", "josh", "Muleshi"};
    Etudiant etud3 = {"00JM375", "josue", "Muteba"};
    Etudiant etud4 = {"75MJ319", "Muteba", "josh"};
    Etudiant etud5 = {"53MM193", "Muleshi", "Muteba"};
    
    ajouterAuDebut(&tete, etud1);
    ajouterAuDebut(&tete, etud3);
    ajouterALaFin(&tete, etud2);
    afficher(tete);

    printf("\n");

    char *mat = "19MM375";
    suprimer(&tete, mat);
    afficher(tete);
}

