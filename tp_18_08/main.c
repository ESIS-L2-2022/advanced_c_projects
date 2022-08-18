#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define RED "\e[0;31m"
#define NC "\e[0m"

void *threadTabBouble(int arg[], int);
int somme = 0;

int main(int argc, char *argv[]){

    int tab[argc];

    if (argc == 1)
    {
        fprintf(stderr, RED "[ERROR]" NC ": You must give arguments\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0, j = 1; i < argc-1; i++)
    {
        tab[i] = atoi(argv[j++]);
    }
    
    int resultat;
    pthread_t thread;

    resultat = pthread_create(&thread, NULL, threadTabBouble(tab, argc), NULL);
    if (resultat != 0)
    {
        fprintf(stderr, RED "[ERROR]" NC ": Thread creation failed\n");
        exit(EXIT_FAILURE);
    }
    
    resultat = pthread_join(thread, NULL); 
    if (resultat != 0)
    {
        fprintf(stderr, RED "[ERROR]" NC ": Failed in the thread union\n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}

void *threadTabBouble(int arg[], int size){

    for (int i = 0; i < size+1; i++){
        somme += arg[i];
    }
    return NULL;
}