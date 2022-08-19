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
    void *thread_result;
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
        tableau[i] = rand() % 1000;
    
    int resultat;
    pthread_t thread;

    resultat = pthread_create(&thread, NULL, customThread, (void *)tableau);
    if (resultat != 0)
    {
        fprintf(stderr, RED "[ERROR]" NC ": Thread creation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("en attente...\n");
    sleep(1);
    
    resultat = pthread_join(thread, &thread_result); 
    if (resultat != 0)
    {
        fprintf(stderr, RED "[ERROR]" NC ": Failed in the thread union\n");
        exit(EXIT_FAILURE);
    }

    printf("average = %.2f\n", saveData.moyen);
    sleep(1);

    printf("max = %d\n", saveData.max);
    sleep(1);

    printf("min = %d\n", saveData.min);

    printf("[END] : %s \n", (char *)thread_result);

    exit(EXIT_SUCCESS);
}

