/*
* C program to convert decimal numbers to binary numbers
* C program to convert decimal numbers to octal numbers
*/
#include<stdio.h>
#include<conio.h>


int main()
{
    int i,j,n,a[20];

    printf("Enter a decimal number:");
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        a[i]=n%2; // use 8 for octal
        n=n/2; // use 8 for octal - Just Two Place change - Subroto
    }

    printf("Binary number:");
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);

    return 0;
}
