#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *customThread(void *);

int main(){

    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, customThread, NULL);
    pthread_create(&thread2, NULL, customThread, NULL);

    long prod = 1;
    for (int i = 1; i < 9999999; i++)
    {
        prod *= i;
    }
    

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
        
    return 0;
}

void *customThread(void *arg){

    long id = (long) pthread_self();

    for (int i = 0; i < 5; i++){
        printf("++ Custom thread %ld : (%d) ++\n", id, i);
        sleep(1);
    }

    return NULL;
}


/*#define NUM_THREADS     5

void *PrintHello(void *threadid)
{
   long tid;
   tid = (long)threadid;
   printf("Hello World! It's me, thread #%ld!\n", tid);
   pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
   pthread_t threads[NUM_THREADS];
   int rc;
   long t;
   for(t=0; t<NUM_THREADS; t++){
      printf("In main: creating thread %ld\n", t);
      rc = pthread_create(&threads[t], NULL, PrintHello, (void *)t);
      if (rc){
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
      }
   }

   /* Last thing that main() should do 
   pthread_exit(NULL);
}*/