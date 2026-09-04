
#include <stdio.h>
int main()
{
int N,a=0,b=1,i,c;
printf("Enter no. of terms of fibonacci series : ");
scanf("%d",&N);
printf("%d\n",a);
printf("%d\n",b);
for(i=1;i<=N-2;i++){
  c=a+b;
printf("%d\n",c);
a=b;
b=c;

}

return 0;
}