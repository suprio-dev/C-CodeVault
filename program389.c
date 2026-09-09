#include <stdio.h>
#include <math.h>

int armstrong(int num);
int new_num=0;

int main(){
int num;
printf("Enter a number : ");
scanf("%d",&num);
if(armstrong(num)==1)
printf("Armstrong Number !");
else if(armstrong(num)==0)
printf("Not an Armstrong Number !");
return 0;
}

int armstrong(int num){
 int n=num;
while(num!=0)
{
int digit=num%10;
new_num+=(int)pow(digit,3);
num/=10;
}
if(n==new_num)
return 1;
else 
return 0;
}