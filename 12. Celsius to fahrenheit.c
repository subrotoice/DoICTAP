/*
* C program to convert temperature from celsius to fahrenheit
* C program to convert temperature from fahrenheit to celcius
* F =(9/5)*C + 32; K = C + 273.15;
*/

#include<stdio.h>
#include<conio.h>

int main() {
    float fahren, celsius;

    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);

    /* convert celsius to fahreneheit
  * Multiply by 9, then divide by 5, then add 32
  */
    fahren = ((float)9/5) * celsius + 32;

    printf("%.2fC is equal to %.2fF\n", celsius, fahren);

 return 0;
}