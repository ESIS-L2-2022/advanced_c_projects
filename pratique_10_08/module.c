#include <assert.h>
#include "module.h"

bool estDivisible(const int a, const int b){

    assert(a >= 0 && "a ne doit pas etre negatif");
    assert(b > 0 && "b doit etre superieur a 0");

    if(a % b == 0)
        return true;
    return false;
}