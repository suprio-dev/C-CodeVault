#include <stdio.h>

int reverse(int num);
int sum=0;

int main(){
int num;
printf("enter a number : ");
scanf("%d",&num);
printf("The reversed number is : %d\n",reverse(num));
return 0;
}

int reverse(int num){
  while(num!=0){
    int digit=num%10;
    sum=sum*10+digit;
    num/=10;

  }
  return sum;
}