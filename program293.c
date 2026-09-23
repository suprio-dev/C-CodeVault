#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100];
  int count = 0;
  printf("Enter string 1 : ");
  fgets(str1, 100, stdin);
  printf("Enter string 2 : ");
  fgets(str2, 100, stdin);
  for (int i = 0; i < strlen(str1); i++)
  {
    for (int j = 0; j < strlen(str2); j++)
    {
      if (str1[i] == str2[j])
      {
        count++;
        break;
      }
    }
  }
  if (strlen(str1) == strlen(str2) && count == strlen(str2) && strcmp(str1, str2) != 0)
    printf("The two strings are anagrams !");
  else
    printf("The two strings are not anagrams !");
  return 0;
}