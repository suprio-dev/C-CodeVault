#include <stdio.h>
int main()
{
  int num, i, digit, c = 0, original_num, k = 0;
  printf("Enter a number : ");
  scanf("%d", &num);
  original_num = num;
  while (num != 0)
  {
    int digit = num % 10;
    c++;
    num /= 10;
  }

  num = original_num;

  for (i = 0; i <= 9; i++)
  {
    while (num != 0)
    {
      digit = num % 10;
      if (digit != i)
        k++;
      num /= 10;
    }
    if (k == c)
      printf("%d\n", i);
    k = 0;
    num = original_num;
  }
  return 0;
}