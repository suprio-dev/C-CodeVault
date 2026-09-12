#include <stdio.h>

void factorial(int *num);

int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("The Number is : %d\n", num);
  factorial(&num);
  printf("The Factorial is : %d\n", num);
  return 0;
}

void factorial(int *num)
{
  int t=*num;
  *num = 1;
  for (int i = 1; i <= t; i++)
    *num *= i;
}