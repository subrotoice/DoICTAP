/*
*  C program to count tne number of digits in an integer
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int num, temp, count=0;
    printf("Enter an integer\n");
    scanf("%d", &num);
    temp = num;

    while(temp!=0) {
        temp = temp/10;
        ++count;
    }
    printf("Number of digits in %d : %d",num, count);

    return 0;
}
