#include <stdio.h>
int main()
{
int x,y,original_num,new_num=0,digit;
printf("ENter values of x & y (x<y) !!\n");
printf("Enter X : ");
scanf("%d",&x);
printf("Enter y : ");
scanf("%d",&y);
for(int i=x;i<=y;i++)
{
  original_num=i;
while(original_num!=0)
{

digit=original_num%10;
new_num=new_num*10+digit;
original_num/=10;

}
if(new_num>i)
printf("%d\n",i);
new_num=0;

}

return 0;

}