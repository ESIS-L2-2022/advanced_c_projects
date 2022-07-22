#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reel() {
    float nb_min = 0;
    for (int i=1; i<4; i++)
    {
       float nb_entre = 0;
        printf("Entrez le nombre %i : ", i);
        scanf("%f", &nb_entre);
        if (nb_entre < nb_min) {
            nb_min = nb_entre;
        }
    }
    printf("Le nombre le plus petit est %f", nb_min);
}

void valeur_positives_et_negative() {
    int nb_pos = 0;
    int nb_neg = 0;

    for (int i = 0; i < 10; i++)
    {
        int nb_entre;
        printf("Entrez un nombre : ");
        scanf("%d", &nb_entre);
        if (nb_entre > 0) {
            nb_pos++;
        } else {
            nb_neg++;
        }
    }
    printf("Il y a %d nombres positifs et %d nombres négatifs", nb_pos, nb_neg);
}

void drawTriangle() {
    int nb_lignes = 6;
    for (int i = 0; i < nb_lignes; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void tableau() {
    int tableau[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Entrez un nombre : ");
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

void Palindrome() {
    char mot[100];
    printf("Entrez un mot : ");
    scanf("%s", mot);
    int longueur = strlen(mot);
    int i = 0;
    int j = longueur - 1;
    while (i < j)
    {
        if (mot[i] != mot[j])
        {
            printf("Le mot n'est pas un palindrome");
            return;
        }
        i++;
        j--;
    }
    printf("Le mot est un palindrome");
}

void avg() {
    int nb_entre = 0;
    int somme = 0;
    for (int i = 0; i < 2; i++)
    {
        printf("Entrez un nombre : ");
        scanf("%d", &nb_entre);
        somme += nb_entre;
    }
    printf("La moyenne est %d", somme / 2);
}

void permutation() {
    int A = 1;
    int B = 2;
    int C = 3;
    int temp;

    temp = A;
    A = B;
    B = C;
    C = temp;
}

void inverserTableau() {
    int tableau[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Entrez un nombre : ");
        scanf("%d", &tableau[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", tableau[i]);
    }
}

void exists() {
    int tableau[5] = {1, 2, 3, 4, 5};

    int nb_entre;
    printf("Entrez un nombre : ");
    scanf("%d", &nb_entre);
    int exists = 0;
    for (int i = 0; i < 5; i++)
    {
        if (tableau[i] == nb_entre)
        {
            exists = 1;
        }
    }
    if (exists == 1)
    {
        printf("Le nombre existe");
    } else {
        printf("Le nombre n'existe pas");
    }
}

void printMaxMatriceOnEachLine() {
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++)
    {
        int max = matrice[i][0];
        for (int j = 0; j < 3; j++)
        {
            if (matrice[i][j] > max)
            {
                max = matrice[i][j];
            }
        }
        printf("%d\n", max);
    }
}

int main() {
    drawTriangle();
    return 0;
}