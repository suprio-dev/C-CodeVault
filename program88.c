
#include <stdio.h>
int main()
{
  int num, largest_digit;
  printf("Enter number : ");
  scanf("%d", &num);
  
  largest_digit = num % 10;
  while (num != 0)
  {
    int digit = num % 10;
    if (digit >= largest_digit)
      largest_digit = digit;
    num /= 10;
  }
printf("Largest digit : %d\n",largest_digit);
return 0;

}