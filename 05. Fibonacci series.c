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
#include <stdio.h>
    int fibo(int);
    int main()

    {
        int num;
        int result;
        printf("Enter the nth number in fibonacci series: ");
        scanf("%d", &num);

        result = fibo(num);
        printf("The %d number in fibonacci series is %d\n", num, result);

        return 0;
    }

    int fibo(int num)
    {
        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        } else {
            return(fibo(num - 1) + fibo(num - 2));
        }
    }
