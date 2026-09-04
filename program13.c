#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  printf("Is the number positive ? : %d\n",num>0);
  printf("Is the number negative ? : %d\n",num<0);
  printf("Is the number zero ? : %d\n",num==0);
  return 0;
}