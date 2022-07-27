#include <stdio.h>

void binaireToHexa();
 
int main()
{
    void binaireToHexa();
    return 0;
}

void binaireToHexa(){
    long int binaryval, hexadecimalval = 0, i = 1, remainder;
 
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
}

void DecimalToHexa(){
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
            hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    // display integer into character
    for (i = j; i >= 0; i--)
        printf("%c\n", hexadecimalnum[i]);
}

void decimalToBinary(int num) {
    
    if (num == 0) {
      printf("0");
      return;
    }
   
   // Stores binary representation of number.
   int binaryNum[32]; // Assuming 32 bit integer.
   int i=0;
   
   while (num > 0) {
      binaryNum[i++] = num % 2;
      num /= 2;
   }
   
   // Printing array in reverse order.
   for (int j = i-1; j >= 0; j--)
      printf("%d", binaryNum[j]);
}