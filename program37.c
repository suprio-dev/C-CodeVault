#include <stdio.h>
int main()
{
int cup_number,n;
printf("Enter the number of cups bought : ");
scanf("%d",&cup_number);
n=cup_number;
printf("Since the user bought %d cups he gets %d cups extra so,the total cups are : %d\n",n,cup_number/=6,cup_number+cup_number/6);
return 0;
}