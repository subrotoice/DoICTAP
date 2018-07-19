/*
* Fibonacci to n terms - Update 19/07/2018 - Subroto
*/
#include <stdio.h>
void revString();

int main()
{
    int i, n, currentNumber=0, lastNumber=0, secondLastNumber=1;
    printf("Enter the number of term: \n");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%d ", currentNumber);
        currentNumber=secondLastNumber+lastNumber;
        secondLastNumber=lastNumber;
        lastNumber=currentNumber;

    }

    return 0;
}




// Using Recursive Function
#include<stdio.h>
int fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    int n,i=0;
    printf("Input the number of terms for Fibonacci Series:");
    scanf("%d",&n);
    printf("\nFibonnaci Series is as follows\n");

    while(i<n)
    {
        printf("%d ",fibonacci(i));
        i++;
    }

    return 0;
}
