#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "threads.h"

Data saveData;

void *customThread(void *arg){
    int *n = (int *) arg;
    int sum = 0;
    saveData.max = 0;
    saveData.min = 0;

    for (int i = 1; i < SIZE; ++i) {
        sum += n[i];
        if (saveData.max < n[i])
            saveData.max = n[i];

        if (saveData.min > n[i])
            saveData.min = n[i];
    }

    saveData.moyen = (float)sum / (SIZE);
    sleep(1);
    pthread_exit("Calcul fini !");
}