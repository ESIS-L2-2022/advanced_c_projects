#include <stdio.h>
//#include <conio.h>
#include <ctype.h>

#include "listSC.h"

int main() {

    int rep, reponse = 0;
    do{
        system("clear");
        printf("\n");
        printf("\t\tLISTE DES ETUDIANTS \n\n");
        printf ("\t\t======================<<<<<<<<<<<!!!!!>>>>>>>>>>>=======================\n");
        printf ("\t\t{}                                                                    {} \n");
        printf ("\t\t{}  [1] : ==========<<<<<<< AJOUTER AU DEBUT           >>>>>>======== {} \n");
        printf ("\t\t{}  [2] : ==========<<<<<<< AJOUTER A LA FIN           >>>>>>======== {} \n");
        printf ("\t\t{}  [3] : ==========<<<<<<< SUPPRIMER                  >>>>>>======== {} \n");
        printf ("\t\t{}  [4] : ==========<<<<<<< TRIER LA LISTE             >>>>>>======== {} \n");
        printf ("\t\t{}  [5] : ==========<<<<<<< AFFICHER LA LISTE          >>>>>>======== {} \n");
        printf ("\t\t{}  [6] : ==========<<<<<<< QUITTER                    >>>>>>======== {} \n");
        printf ("\t\t{}                                                                    {} \n");
        printf ("\t\t=======================<<<<<<<<<<!!!!!>>>>>>>>>>>=======================\n\n");
        printf("Veuillez faire votre choix : ");
        scanf ("%d",&rep);
        fflush(stdin);
        system("clear");

        switch(rep){
            case 1:
                system("clear");
                printf("\t\t\tAJOUTER AU DEBUT\n\n");
                break;
            case 2:
                printf("\t\t\tAJOUTER A LA FIN\n\n");
                break;
            case 3:
                printf("\t\t\tSUPPRIMER\n\n");
                
                break;
            case 4:
                printf("\t\t\tTRIER LA LISTE\n\n");
                
                break;
            case 5:
                printf("\t\t\tAFFICHER LA LISTE\n\n");
                
                break;
            case 6:
                quitter();
                break;
            default:
                printf("\n choix incorrect");
        }
        pause();
    }while(1);

    getch();

    return 0;

    /*Element tete = NULL;
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
    afficher(tete);*/
}

