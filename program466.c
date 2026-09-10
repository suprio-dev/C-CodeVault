
#include <stdio.h>

int main(){
  int a,b;
  printf("Enter a & b (a>b) : \n");
  printf("Enter a : ");
  scanf("%d",&a);
  int num1=a;
  int *ptr_a=&a;
  printf("Enter b : ");
  scanf("%d",&b);
  int num2=b;
  int *ptr_b=&b;
  while(1)
{
int rem=*ptr_a%*ptr_b;
if(rem==0)
{
  printf("LCM of two numbers is : %d\n",num1*num2/(*ptr_b));
  break;
}
else{
  *ptr_a=*ptr_b;
  *ptr_b=rem;

}

}

return 0;
}
