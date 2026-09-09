#include <stdio.h>

int sum(int num);

int main(){
int num;
printf("Enter a number : ");
scanf("%d",&num);
printf("Sum of first %d natural numbers is : %d",num,sum(num));
return 0;
}

int sum(int num){
  if(num==1)
  return 1;
  int num_m_1=sum(num-1);
  int sum=num_m_1+num;
  return sum;
}