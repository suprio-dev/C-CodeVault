#include <stdio.h>
int main()
{
  char str[100];
  int count = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)
  {

    if (str[i] == ' ')
      count++;
  }
  printf("The number of words : %d\n", count + 1);
  return 0;
}