#include <stdio.h>
#include <ctype.h>
int main()
{
  char str[100];
  printf("Enter the string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)
    printf("%c", toupper(str[i]));
  return 0;
}