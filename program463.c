
#include <stdio.h>

int sumCal(int *ptr1,int *ptr2);

int main()
{
  int num1,num2;
  printf("Enter number 1 : ");
  scanf("%d",&num1);
  printf("Enter number 2 : ");
  scanf("%d",&num2);
  
int sum=sumCal(&num1,&num2);
printf("Sum : %d",sum);
return 0;
}

int sumCal(int *ptr1,int *ptr2){
return *ptr1+*ptr2;
}