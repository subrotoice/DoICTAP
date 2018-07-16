/*
* C program to print triangle pyramid pattern using * - Subroto - Updated 20-Mar-2017
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int r,c,rows,s;

    printf("How many triangular rows do you want(rows):");
    scanf("%d",&rows);
    printf("The triangular numbers are:\n");
    s=0;
    for(r=1;r<=rows;r++)
    {
        for(c=1;c<=r;c++)
        {
            s=s+1; // printf("* "); if need to print - Subroto
        }
        printf("%d\t",s); // printf("\n"); if need to print - Subroto
    }

    return 0;
}
