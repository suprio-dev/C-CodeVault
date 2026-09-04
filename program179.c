#include <stdio.h>
int main()
{
int num,digit,new_num=0,original_num,c=0,k=0;
printf("Enter a number : ");
scanf("%d",&num);
original_num=num;
while(num!=0)
{

digit=num%10;
new_num=new_num*10+digit;
num/=10;

}
for (int i = 1; i <= new_num; i++)
    {
      if (new_num % i == 0)
        c++;
    }
for (int i = 1; i <= original_num; i++)
    {
      if (original_num % i == 0)
        k++;
    }
    
if(c==2 && k==2)
printf("Twisted Prime");
else
printf("Not Twisted Prime");
return 0;
}