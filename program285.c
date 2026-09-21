#include <stdio.h>
#include <ctype.h>
int main()
{
  char str[100];
  printf("Enter the string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)

  {
    if (isupper(str[i]))
      printf("%c", tolower(str[i]));
    if (islower(str[i]))
      printf("%c", toupper(str[i]));
  }

  return 0;
}