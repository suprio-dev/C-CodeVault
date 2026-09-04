#include <stdio.h>
int main()
{
int num,n,sum=0,digit;
printf("Enter a number : ");
scanf("%d",&num);
n=num;

while(1){


while(num!=0)
{
digit=num%10;
sum+=digit;
num/=10;
}

if(sum<=9 && sum>=0){
printf("The sum of the digits of %d is : %d",n,sum);
break;
}
 else{
  num=sum;
  sum=0;
 }



}

return 0;
}