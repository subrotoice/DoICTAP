/*
* C Program to print fibonacci series - Update 19/07/2017 - Subroto
*/
#include <stdio.h>
#include <conio.h>

int main(){
    int counter, newNumber, firstNumber=1, secondNumber=0, terms;
    printf("Enter number of termination in Fibonacci series: ");
    scanf("%d", &terms);

    for(counter=firstNumber; counter<=terms; ++counter){
        newNumber=firstNumber+secondNumber;
        firstNumber=secondNumber;
        secondNumber=newNumber;
        printf("%d ", newNumber);
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