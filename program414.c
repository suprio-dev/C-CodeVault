#include <stdio.h>

int euclidGcd(int max, int min);

int main()
{
  int num1, num2, max, min;
  printf("Enter number 1 : ");
  scanf("%d", &num1);
  printf("Enter number 2 : ");
  scanf("%d", &num2);
  if (num1 > num2)
  {
    max = num1;
    min = num2;
  }
  else
  {
    max = num2;
    min = num1;
  }
  printf("GCD by Euclid's Algorithm is : %d\n", euclidGcd(max, min));
  return 0;
}

int euclidGcd(int max, int min)
{
  while (1)
  {
    int remainder = max % min;
    if (remainder == 0)
      return min;
    max = min;
    min = remainder;
  }
}