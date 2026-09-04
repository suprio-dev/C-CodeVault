
#include <stdio.h>
int main()
{
int N,a=0,b=1,i=3,c;
printf("Enter Nth fibonacci number : ");
scanf("%d",&N);
if(N==1)
printf("%d\n",a);
else if(N==2)
printf("%d\n",b);

else if(N>=3)
{

while(1){
 c=a+b;
 if(i==N){
printf("%d\n",c);
break;
 }


else{
a=b;
b=c;
i++;
}

}

}

return 0;
}