#include <stdio.h>
int main()
{
  char str[100], ch;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  printf("Enter a character : ");
  scanf("%c", &ch);
  for (int i = 0; i != str[i]; i++)
  {
    if (str[i] == ch)
    {
      printf("First occurence of %c is at index : %d", str[i], i);
      break;
    }
  }
  return 0;
}