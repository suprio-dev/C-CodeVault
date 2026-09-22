#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], ch;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  printf("Enter a character : ");
  scanf("%c", &ch);
  for (int i = strlen(str)-2; i>=0 ; i--)
  {
    if (str[i] == ch)
    {
      printf("Last occurence of %c is at index : %d", str[i], i);
      break;
    }
  }
  return 0;
}