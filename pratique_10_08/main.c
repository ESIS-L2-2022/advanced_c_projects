#include <stdio.h>
#include "module.h"

#define D 0

int main(){

    #if D == 1
        printf("We are debugging code. \n");
    #else
        printf("josh\n");
    #endif

    return 0;
}