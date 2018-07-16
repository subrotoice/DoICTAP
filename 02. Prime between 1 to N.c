// Program to Print all prime numbers between 1 to N
#include <stdio.h>
int main()
{
   int i, j, flag, N, count = 0;
   printf("Enter two numbers(intervals) \n"); //here strsts form 1
   scanf("%d", &N);

   printf("Prime Numbers between 1 and %d are: \n", N);
   /* For every number between 2 to N, chekc whether it is prime
   Number or not*/
   for(i=2; i<=N; ++i) // here i works as n for Prime abc
   {
       flag = 0;
       /* Check whether i is prime or not*/
       for(j=2; j<=i/2; ++j)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            {
                printf("%d \n", i);
                ++count;
            }
   }
   printf("Total are %d \n", count);
   return 0;
}
