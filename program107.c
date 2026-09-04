#include <stdio.h>
#include <math.h>
int main()
{
int num;
printf("Enter a number : ");
scanf("%d",&num);
for(int i=1;i<=num;i++){
if(cbrt(i)==floor(cbrt(i)))
printf("%d\n",i);
}
return 0;
}