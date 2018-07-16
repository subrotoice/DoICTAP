// decimal to hexi
#include<stdio.h>
#include<conio.h>

int main()
{
    int  decimal, binary, i=1,digit;
    char hex[20];

    printf("Enter Decimal number\n");
    scanf("%d", &decimal); //(154)=9A

    while( decimal !=0 ){
        digit=decimal%16;
        if(digit>9){
            hex[i++]=digit+55;
        } else{
            hex[i++]=digit+48;
        }
        decimal=decimal/16;
    }

    i=i-1;
    while(i>=1){
        printf("%c", hex[i--]);
    }
    return 0;
}


