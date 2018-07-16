/*
* C program to convert binary numbers to decimal numbers
* C program to convert octal numbers to decimal numbers
*/

#include <stdio.h>
#include <math.h>

int main() {
    long binaryNumber, decimalNumber=0;
    int position=0, digit;

    printf("Enter a Binary Number\n");
    scanf("%ld", &binaryNumber);

    while(binaryNumber!=0) {
        /* get the least significant digit of binary number */

        digit = binaryNumber%10;
        decimalNumber += digit*pow(2, position); // use 8 if want octal

        position++;
        binaryNumber /= 10;
    }

    printf("Decimal Number : %ld", decimalNumber);

    return 0;
}
