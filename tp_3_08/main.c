#include <stdio.h>
#include "map.h"

int main(){

    int tab[] = {1, 2, 3, 4, 5, 8, 9, 10, 12, 18, -1};
    int count = sizeof(tab)/sizeof(int);

    printTab(tab, count);

    printTab(filter(tab, count, pair), 0);

    /*int *result = NULL;
    result = filter(tab, count, pair);

    if (result)
    {
        printTab(result, 0);
    }*/
    
    return 0;
}