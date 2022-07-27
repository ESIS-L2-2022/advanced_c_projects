#include <stdio.h>
#include "conversion.h"

void decimalToHexa(long nombre){
    long quotient, reste;
    int i, j = 0;
    char hexadecimal[100];
 
    quotient = nombre;
 
    while (quotient != 0)
    {
        reste = quotient % 16;
        if (reste < 10)
            hexadecimal[j++] = 48 + reste;
        else
            hexadecimal[j++] = 55 + reste;
        quotient = quotient / 16;
    }

    printf("%ld en decimal = %s en hexadecimal\n", nombre, hexadecimal);
}

void decimalToBinary(long nombre) {
    
    long t = nombre;
    int binaire[32];
    int i=0;

    if (nombre == 0) {
        printf("0");
        return;
    }

    while (nombre > 0) {
        binaire[i++] = nombre % 2;
        nombre /= 2;
    }
   
    printf("%ld en decimal = ", t);
    for (int j = i-1; j >= 0; j--)
        printf("%d", binaire[j]);
    printf(" en binaire\n");
}

void binaireToHexa(long int binaire){

    long int hexadecimal = 0, i = 1, reste, t = binaire;

    while (binaire != 0)
    {
        reste = binaire % 10;
        hexadecimal = hexadecimal + reste * i;
        i = i * 2;
        binaire = binaire / 10;
    }
    printf("%ld en decimal = %ld en hexadecimal\n", t, hexadecimal);
}