#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], sub_str[100], slice_str[100];
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  printf("Enter a substring : ");
  fgets(sub_str, 100, stdin);
  for (int i = 0; i <= strlen(sub_str) - 2; i++)
  {
    slice_str[i] = str[i];
  }
  slice_str[strlen(sub_str) - 1] = '\n';
  slice_str[strlen(sub_str)] = '\0';
  if (strcmp(sub_str, slice_str) == 0)
    printf("The string starts with the given substring !");
  else
    printf("The string doesnot start with the given substring !");
  return 0;
}