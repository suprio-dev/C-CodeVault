#include <stdio.h>
int main()
{
int num,c=0;
printf("Enter a number :");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
  if(num%i==0)
  c++;
}
if(c==6)
printf("Number Wins !");
else
printf("Number Losses !");
return 0;

}