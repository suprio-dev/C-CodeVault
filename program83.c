

#include <stdio.h>
int main()
{
int num,sum=0,c=0,i,j;
printf("Enter a number : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{

for(j=1;j<=i;j++){

if(i%j==0)
c++;
}

if(c==2)
sum+=i;
c=0;


}
printf("Sum of prime numbers : %d\n",sum);
return 0;

}


