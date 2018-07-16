// Hex to Decimal  (A08)=2568    0=48, A=65, a=97
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main()
{
    int  decimal=0, i=0,n, val;
    char hex[20];
    printf("Enter Hexadicimal number\n");
    gets(hex);
    n=strlen(hex)-1;

    while(n>=0){
        if (hex[n]>='0' && hex[n]<='9'){
            val=hex[n]-48;
        }

        else if (hex[n]>='A' && hex[n]<='Z'){
            val=hex[n]-55; // A=10, 65-55=10
        }

        else if (hex[n]>='a' && hex[n]<='z'){
            val=hex[n]-87; // a=97, 97-87=10
        }

        decimal= decimal + val*pow(16,i++);
        n=n-1;
    }

    printf("\nDecimal= %d", decimal);
    return 0;
}
