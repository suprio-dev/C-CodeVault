#include <stdio.h>
#include <math.h>
int main()
{
  int num,digit, c = 0, original_num, sum = 0,ori_num;
  printf("Enter a number : ");
  scanf("%d", &num);
  original_num = num;
  ori_num=num;
  while (num != 0)
  {
    int digit = num % 10;
    c++;
    num /= 10;
  }
while(original_num!=0)
{
int digit=original_num%10;
sum+=pow(digit,c);
c--;
original_num/=10;

}

if(sum==ori_num)
printf("Special Number !");
else 
printf("Not a special number !");
return 0;
}