#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100];
  int count;
  printf("\nEnter string 1 : ");
  fgets(str1, 100, stdin);
  printf("\nEnter string 2 : ");
  fgets(str2, 100, stdin);
  for (int i = 0; str1[i] != '\0'; i++)
  {
    if (str1[i] == '\n')
      count=i;
  }
  for (int i = 0; str2[i] != '\n'; i++)
  {
    str1[count] = str2[i];
    count++;
  }
  str1[count] = '\0';
  printf("\nConcatinated string : ");
  puts(str1);
  return 0;
}