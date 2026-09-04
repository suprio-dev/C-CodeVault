#include <stdio.h>
int main()
{
  int a, b, rem;
  printf("Enter two numbers(a>b)\n");
  printf("Enter a : ");
  scanf("%d", &a);
  printf("Enter b : ");
  scanf("%d", &b);
  while (1)
  {
    rem = a % b;
    if (rem == 0)
    {
      if (b == 1)
        printf("Co-prime numbers !");
      else
        printf("Not Co-prime numbers !");
      break;
    }
    else
    {
      a = b;
      b = rem;
    }
  }
  return 0;
}