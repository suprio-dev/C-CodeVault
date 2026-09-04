#include <stdio.h>
int main()
{
  int num, largest_digit, number_original, smallest_digit, gap, sum = 0;
  printf("Enter number : ");
  scanf("%d", &num);
  number_original = num;
  largest_digit = num % 10;
  while (num != 0)
  {
    int digit = num % 10;
    if (digit >= largest_digit)
      largest_digit = digit;
    num /= 10;
  }

  smallest_digit = number_original % 10;
  while (number_original != 0)
  {
    int digit = number_original % 10;
    if (digit <= largest_digit)
      smallest_digit = digit;
    number_original /= 10;
  }

  gap = largest_digit - smallest_digit;

  for (int i = 1; i < gap; i++)
  {

    if (gap % i == 0)
      sum += i;
  }

  if (sum == gap)
    printf("Perfect-Gap Number !");
  else
    printf("Not a Perfect-Gap Number !");
  return 0;
}
