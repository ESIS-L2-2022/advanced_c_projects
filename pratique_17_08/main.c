#include <stdio.h>
#include <assert.h>

void permuter(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = *pa;
}

int pgcd(unsigned int num1, unsigned int num2){
    if(num1==num2)
        return num1;            
    else{
        if(num1>num2)
           return pgcd(num1-num2, num2);
        else
           return pgcd(num1, num2-num1);
    }   
}

int pgcdboucle(unsigned int num1, unsigned int num2){
    int i = 0;

    if (num1==num2)
        return num1;
    else{
        if(num1>num2){
            i = num2;
            while (num1-num2 != i)
            {
                i -= num1;
            }
            return i;
        }else{
            i = num1;
            while (num2-num1 != i)
            {
                i -= num2;
            }
            return i;
        }
    }
}

void testPgcd(int (*fonction)(unsigned int, unsigned int)){
    int a, b;

    a = 45, b = 30;
    assert(fonction(a, b) == 15);
}

int main(){

    int a = 60, b = 36;

    printf("%d",pgcdboucle(a, b));

    /*printf("avant : a = %d et b = %d", a, b);


    permuter(a, b);


    printf("apres : a = %d et b = %d", a, b);*/

    return 0;
}