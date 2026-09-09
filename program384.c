#include <stdio.h>

int power(int num, int index);

int main()
{
  int num, index;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("Enter index : ");
  scanf("%d", &index);
  printf("%d raised to the power %d is : %d",num,index,power(num,index));
  return 0;
}

int power(int num, int index)
{
  if(index==1)
  return num;
  int num_m_1 = power(num,index - 1);
  int num_power=num_m_1*num;
  return num_power;
}