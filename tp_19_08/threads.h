#ifndef __THREADS_H__
#define __THREADS_H__

#define SIZE 1000
#define RED "\e[0;31m"
#define NC "\e[0m"

typedef struct data{
    float moyen;
    int min;
    int max;
} Data;

void *customThread(void *);

#endif