#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *customThreadDoubler(void *);
void *customThreadTripler(void *);

int main(){

    pthread_t thread1, thread2;

    int nb;
    printf("Saisir un nombre");
    scanf("%d", &nb);

    pthread_create(&thread1, NULL, customThreadDoubler, (void *)&nb);
    pthread_create(&thread2, NULL, customThreadTripler, (void *)&nb);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}

void *customThreadDoubler(void *arg){
    
}

void *customThreadTripler(void *arg){

}