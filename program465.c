
#include <stdio.h>

int main(){
  int a,b;
  printf("Enter a & b (a>b) : \n");
  printf("Enter a : ");
  scanf("%d",&a);
  int *ptr_a=&a;
  printf("Enter b : ");
  scanf("%d",&b);
  int *ptr_b=&b;
  while(1)
{
int rem=*ptr_a%*ptr_b;
if(rem==0)
{
  printf("HCF of two numbers is : %d\n",*ptr_b);
  break;
}
else{
  *ptr_a=*ptr_b;
  *ptr_b=rem;

}

}

return 0;
}