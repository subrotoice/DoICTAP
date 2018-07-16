/*
*  C Program to find sum of digits of a number - Subroto
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int num, digitSum=0;
    printf("Enter an integer\n");
    scanf("%d", &num);

    while(num!=0) {
        digitSum += num % 10;
        num = num/10;
    }
    printf("Sum of digits : %d\n", digitSum);

    return 0;
}
