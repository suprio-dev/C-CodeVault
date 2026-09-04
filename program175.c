#include <stdio.h>
int main()
{
  int number, c = 0, digit,prime_sum=0;
  printf("Enter a number : ");
  scanf("%d", &number);
  while (number != 0)
  {
    digit = number % 10;
    for (int i = 1; i <= digit; i++)
    {
      if (digit % i == 0)
        c++;
    }
    if (c == 2)
prime_sum+=digit;
c=0;
number/=10;
  }
  printf("%d",prime_sum);
  return 0;
}

