#include <stdio.h>
#include <math.h>
int main()
{
  int num, last_digit, c = 0, first_digit, original_num, middle_digits;
  printf("Enter a number : ");
  scanf("%d", &num);
  original_num = num;
  last_digit = num % 10;
  while (num != 0)
  {
    int digit = num % 10;
    c++;
    num /= 10;
  }
  first_digit = original_num / (int)pow(10, c - 1);
  middle_digits = (original_num % (int)pow(10, c - 1)) / 10;
  int k = 1, sum = 0;
  while (middle_digits != 0)
  {
    int digit = middle_digits % 10;
    sum += digit * (int)pow(10, k);
    k++;
    middle_digits /= 10;
  }
  int new_number = last_digit * (int)pow(10, c-1) + sum + first_digit;
  if (new_number % 11 == 0)
    printf("Swap Success !");
  else
    printf("Not Swap Success !");
  return 0;
}