#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){

    //int num = argv[1], 
    int i;
    char tout[52];
    char password[7];
    srand(time(NULL));

    FILE * db = fopen("data.txt", "r");
    FILE * pass = fopen("password.txt", "a");

    if(db==NULL){
        printf("Fichier introuvable");
        exit(0);
    }

    for (i = 0; i < 7; i++)
    {
        fgets(tout, 52, db);
        rand() % 50,
        //password[i] = tout[rand() % 50];
        printf("%s", tout);
    }

    printf("\n\n");

    //fclose(db);
    fclose(password);

    exit(0);
}

