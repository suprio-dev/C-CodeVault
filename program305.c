#include <stdio.h>
int main()
{
  char str[100], ch;
  int count = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  printf("Enter a character : ");
  scanf("%c", &ch);
  for (int i = 0; i != str[i]; i++)
  {
    if (str[i] == ch)
    {
      count++;
    }
  }
  printf("The occurence of %c is : %d", ch, count);
  return 0;
}