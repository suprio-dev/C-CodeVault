#include <stdio.h>

void counter(int ch);
int vCount = 0, cCount = 0;
int main()
{
  char str[100];

  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\n'; i++)
  {
    counter(str[i]);
  }
  printf("Vowels : %d\n", vCount);
  printf("Consonants : %d\n", cCount);
  return 0;
}

void counter(int ch)
{

  switch (ch)
  {
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    vCount++;
    break;
  default:
    cCount++;
  }
}