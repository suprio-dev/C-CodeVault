#include <stdio.h>
int main()
{
 int num;
printf("Enter number :");
scanf("%d",&num);
printf("Last digit of %d without using %% operator is : %d\n",num,num - 10 * (num/10));
return 0;
}