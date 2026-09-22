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
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
      count++;
  }
  if (count == strlen(str) - 1)
    printf("The string contains only alphabets !");
  else
    printf("The string doesnot contain only alphabets !");
  return 0;
}
