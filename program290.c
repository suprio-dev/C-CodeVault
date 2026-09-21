#include <stdio.h>
int main()
{
  char str[100], ch;
  int count = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  printf("Enter a character : ");
  scanf("%c", &ch);
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
      str[i] = ch;
    }
  }
  puts(str);
  return 0;
}