#include <stdio.h>

int hcf(int a,int b);

int main(){
  int a,b;
  printf("Enter a & b (a>b) : \n");
  printf("Enter a : ");
  scanf("%d",&a);
  
  printf("Enter b : ");
  scanf("%d",&b);
printf("LCM of two numbers is : %d\n",a*b/hcf(a,b));

return 0;
}

int hcf(int a,int b)
{
  while(1)
{
int rem=a%b;
if(rem==0)
{
  return b;
}
else{
  a=b;
  b=rem;

}

}
}






















