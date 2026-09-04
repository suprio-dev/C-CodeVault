#include <stdio.h>
int main()
{
  int cash;
  printf("Enter cash : ");
  scanf("%d", &cash);
  if (cash % 10 == 0)
  {
    printf("Denominations : \n");
    printf("Number of 500 notes : %d\n", cash / 500);
    printf("Number of 100 notes : %d\n", (cash - (cash / 500) * 500) / 100);
    printf("Number of 10 notes : %d\n", ((cash - (cash / 500) * 500)  - ((cash - (cash / 500) * 500) / 100) * 100) / 10);
  }
  else
  printf("Machine cannot dispense amounts\n which are not multiples of 10 !!\n");
    return 0;
}



