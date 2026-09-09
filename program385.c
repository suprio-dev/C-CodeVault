#include <stdio.h>

int fact(int num);

int main(){
int num;
printf("Enter a number : ");
scanf("%d",&num);
printf("Factorial of %d is : %d",num,fact(num));
return 0;
}

int fact(int num){
  if(num==1)
  return 1;
  int num_m_1=fact(num-1);
  int factorial=num_m_1*num;
  return factorial;
}
