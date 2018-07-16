/*
*  C Program to reverse the digits of a number
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int num, rightDigit;
    printf("Enter an integer\n");
    scanf("%d", &num);

    printf("Reverse order: ");
    while(num!=0) {
        rightDigit = num % 10;
        num = num/10;

        printf("%d \t", rightDigit);
    }

    return 0;
}