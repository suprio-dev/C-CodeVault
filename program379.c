#include <stdio.h>

int sumCal(int num);
int sum = 0;

int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("The sum of the digits is : %d\n", sumCal(num));
  return 0;
}

int sumCal(int num)
{
  while (num != 0)
  {
    int digit = num % 10;
    sum += digit;
    num/=10;
  }

  return sum;
}