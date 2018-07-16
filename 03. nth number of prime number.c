// Program to display specific (nth) number of prime number
#include <stdio.h>
int main()
{
   int i=1, j, flag, N, prime, count = 0;
   printf("Enter Value of N \n");
   scanf("%d", &N);

   /* For every number between 2 to N, chekc whether it is prime
   Number or not*/
    while(count<=N)
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
                prime = i;
                ++count;
            }
        ++i;
   }
   printf("%d th prime number is: %d", N, prime);
   return 0;
}
