#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int count = 0, k;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; i < (int)strlen(str) / 2 - 1; i++)
  {

    char first_ch = str[i];
    char second_ch = str[(int)strlen(str) - i - 2];
    str[i] = second_ch;
    str[(int)strlen(str) - i - 2] = first_ch;
  }
  for (int i = 0; str[i] != '\n'; i++)
  {
    k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
      if (str[i] == str[j])
        k++;
    }
    if (k > 0)
      continue;
    else
    {
      for (int j = 0; str[j] != '\n'; j++)
      {

        if (str[i] == str[j])
          count++;
      }
      if (count == 1)
      {
        printf("The last non-repeating character is : %c\n", str[i]);
        break;
      }

      count = 0;
    }
  }

  return 0;
}