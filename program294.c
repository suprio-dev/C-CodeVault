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
    if (str1[i] == str2[i])
      count++;
  }
  if (strlen(str1) == strlen(str2) && count == strlen(str1))
    printf("Both string 1 and string 2 are equal !");
  else
  {
    for (int i = 0; i < strlen(str1); i++)
    {
      if (str1[i] != str2[i])
      {
        int diff = str1[i] - str2[i];
        if (diff > 0)
        {
          printf("string 1 is greater then string 2 !");
          break;
        }

        else
        {
          printf("string 2 is greater then string 1 !");
          break;
        }
      }
    }
  }
  return 0;
}