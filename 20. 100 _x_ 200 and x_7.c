/*
*  C Program to find the number of and sum of all integers greater than 100 and less than 200 that are divisible by 7.
*/
#include<stdio.h>
#include<conio.h>

int main() {
    int i, sum = 0;
    for(i=101; i<200; ++i) {
        if (i%7 == 0)
        {
            sum +=i;
        }
    }
    printf("Sum = %d", sum);
    return 0;
}