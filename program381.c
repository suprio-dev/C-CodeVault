#include <stdio.h>

int reverse(int num);
int sum=0;

int main(){
int num;
printf("enter a number : ");
scanf("%d",&num);

if(reverse(num)==1)
printf("Palindrome Number !");

else if(reverse(num)==0)
printf("Not Palindrome Number !");


return 0;
}

int reverse(int num){
  int original=num;
  while(num!=0){
    int digit=num%10;
    sum=sum*10+digit;
    num/=10;

  }
  if(original==sum)
  return 1;
  else
  return 0;
}