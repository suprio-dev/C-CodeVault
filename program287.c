#include <stdio.h>
int main()
{
  char str[100];
  int count = 0, k;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
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
      printf("The frequency of %c : %d\n", str[i], count);
      count = 0;
    }
  }

  return 0;
}