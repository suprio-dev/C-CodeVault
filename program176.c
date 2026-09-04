#include <stdio.h>
int main()
{
  int num,digit, c = 0, original_num, sum = 0;
  printf("Enter a number : ");
  scanf("%d", &num);
  original_num = num;
  while (num != 0)
  {
    int digit = num % 10;
    c++;
    num /= 10;
  }
while(original_num!=0)
{
int digit=original_num%10;
sum+=digit*c;
c--;
original_num/=10;

}
if(sum%2==0)
printf("Weighted Even !");
else
printf("Weighted Odd !");
return 0;

}

