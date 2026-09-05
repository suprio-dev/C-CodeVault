#include <stdio.h>
int main()
{
  int num, smallest_digit;
  printf("Enter number : ");
  scanf("%d", &num);
  

  smallest_digit = num% 10;
  while (num != 0)
  {
    int digit = num % 10;
    if (digit <= smallest_digit)
      smallest_digit = digit;
    num /= 10;
  }
 printf("Smallest digit : %d\n",smallest_digit);
return 0;
}