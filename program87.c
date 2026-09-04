
#include <stdio.h>
int main()
{
int num,power,i,pro=1;
printf("Enter number : ");
scanf("%d",&num);
printf("Enter power : ");
scanf("%d",&power);
if(power==0)
printf("Power of a number is : %d\n",num*power);

else{

for(i=1;i<=power;i++)
{
pro*=num;

}

}
printf("Power of a number is : %d\n",pro);

return 0;

}