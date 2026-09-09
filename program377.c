#include <stdio.h>

int fact(int num);
int product=1;
int main()
{
int num;
printf("Enter a number : ");
scanf("%d",&num);
printf("The factotial of the number is : %d\n",fact(num));
return 0;
}

int fact(int num){
for(int i=1;i<=num;i++){
  product*=i;
}
return product;
}