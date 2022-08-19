#include <pthread.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include "threads.h"


int main(){
    extern Data saveData;
    int tableau[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
        tableau[i] = rand() % 1001;
    
    int resultat;
    pthread_t thread;

    resultat = pthread_create(&thread, NULL, customThread, (void *)tableau);
    if (resultat != 0)
    {
        fprintf(stderr, RED "[ERROR]" NC ": Thread creation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("en attente...\n");
    
    resultat = pthread_join(thread, NULL); 
    if (resultat != 0)
    {
        fprintf(stderr, RED "[ERROR]" NC ": Failed in the thread union\n");
        exit(EXIT_FAILURE);
    }

    printf("average = %.2f\n", saveData.moyen);
    printf("max = %d\n", saveData.max);
    printf("min = %d\n", saveData.min);

    exit(EXIT_SUCCESS);
}

