#include <stdio.h>
int main()
{
  char arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth character : ", i);
    scanf(" %c", &arr[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    switch (arr[i])
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
      printf(" %c\t", arr[i]);
    }
  }
  return 0;
}