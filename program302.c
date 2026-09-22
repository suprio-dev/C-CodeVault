#include <stdio.h>
#include <string.h>
int main()
{
  int count = 0;
  char str[100];
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\n'; i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
      count++;
  }
  if (count == strlen(str) - 1)
    printf("The string contains only digits !");
  else
    printf("The string doesnot contain only digits !");
  return 0;
}
