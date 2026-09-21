#include <stdio.h>
int main()
{
  char str[100];
  int count = 0, k;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  printf("The duplicate characters : \n");
  for (int i = 0; str[i] != '\n'; i++)
  {

    k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
      if (str[i] == str[j])
        k++;
    }
    if (k>0 && k <= 1)
      printf("%c\n", str[i]);
    }
  return 0;
}