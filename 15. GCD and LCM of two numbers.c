/*
* C Program to find GCD and LCM of two numbers
*/
#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, num1, num2, temp, gcd, lcm;

  printf("Enter two numbers\n");
  scanf("%d %d", &a, &b);

  num1 = a;
  num2 = b;

  while (num2 != 0) {
    temp = num2;
    num2 = num1 % num2;
    num1 = temp;
  }

  gcd = num1;
  /*
   *  GCD(a, b) * LCM(a, b) = a*b
   */
  lcm = (a*b) / gcd;

  printf("GCD of %d and %d is %d\n", a, b, gcd);
  printf("LCM of %d and %d is %d\n", a, b, lcm);

  return 0;
}
