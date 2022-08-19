#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#include "threads.h"

Data saveData;

void *customThread(void *arg){
    int *n = (int *) arg;
    int sum = 0;
    saveData.max = 0;
    saveData.min = 1000;
    
    for (int i = 0; i < SIZE; i++)
        sum += n[i];
    saveData.moyen = (float)sum / (SIZE);

    for (int i = 1; i < SIZE; ++i) {
        if (saveData.max < n[i]) {
            saveData.max = n[i];
        }
    }

    for (int i = 1; i < SIZE; ++i) {
        if (saveData.min > n[i]) {
            saveData.min = n[i];
        }
    }
    pthread_exit(0);
}