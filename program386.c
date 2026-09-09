#include <stdio.h>

int digitsCal(int num);
int c = 0;

int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("The number of digits is : %d\n", digitsCal(num));
  return 0;
}

int digitsCal(int num)
{
  while (num != 0)
  {
    int digit = num % 10;
    c++;
    num /= 10;
  }

  return c;
}