#include <stdio.h>
#include <ctype.h>
void upperChange(char str[100]);

int main()
{
  char str[100];
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  upperChange(str);
  return 0;
}

void upperChange(char str[100])
{
  for (int i = 0; str[i] != '\n'; i++)
  {
    if (islower(str[i]))
      str[i] = toupper(str[i]);
    
  }
  puts(str);
}



