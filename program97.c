#include <stdio.h>
int main()
{
int num,c=0;
printf("Enter a number : ");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{

if(num%i==0)
c++;

}
printf("Number of factors is : %d",c);
return 0;
}