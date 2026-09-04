#include <stdio.h>
int main()
{
int c=0,prime_position=0,num;
printf("Enter a number : ");
scanf("%d",&num);
int i=1;
while(1)
{
for(int j=1;j<=i;j++)
{
if(i%j==0)
c++;

}
if(c==2)
{
prime_position++;
if(prime_position==num){
printf("The prime number at the %dth position is : %d\n",prime_position,i);
break;
}

}
c=0;
i++;
}

return 0;

}