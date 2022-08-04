#include <stdio.h>
#include "map.h"

int main(){

    int tab[] = {1, 2, 3, 4, 5, 8, 9, 10, 12, 18};
    int count = sizeof(tab)/sizeof(int);

    filter(tab, count, pair);
    return 0;
}