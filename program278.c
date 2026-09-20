#include <stdio.h>
int main()
{
  char str[100], count = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)
  {
    switch (str[i])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
    }
  }
  printf("The number of vowels : %d\n", count);
  return 0;
}