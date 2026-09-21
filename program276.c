#include <stdio.h>
#include <string.h>
int main()
{

  char str[100];
  int count = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; i < (int)strlen(str) / 2 - 1; i++)
  {

    char first_ch = str[i];
    char second_ch = str[(int)strlen(str) - i - 2];
    str[i] = second_ch;
    str[(int)strlen(str) - i - 2] = first_ch;
  }

  printf("The reversed string is : ");
  puts(str);
  return 0;
}