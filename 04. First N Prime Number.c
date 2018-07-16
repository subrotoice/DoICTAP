// Print first N Prime Number
#include <stdio.h>
int main()
{
   int i=1, j, flag, N, prime, count = 1;
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
        if (flag == 0 && i > 1)
            {
                prime = i;
                printf("prime %d is: %d\n", count, prime);
                ++count;

            }
        ++i;

   }
   return 0;
}
