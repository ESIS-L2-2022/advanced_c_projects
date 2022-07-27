#include <stdio.h>
#include "conversion.h"
#include "demande.h"

void demandeValeurs(){
    long int decimal, binaire;

    printf("Entrez un nombre decimal : ");
    scanf("%ld", &decimal);

    printf("Entrez un nombre binaire : ");
    scanf("%ld", &binaire);

    printf("-------------------------------------\n");

    decimalToHexa(decimal);
    decimalToBinary(decimal);
    binaireToHexa(binaire);

}
