#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], longest_word[100];
  int count = 0, max_word = 0, word_start_index = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] != ' ' && str[i] != '\n')
      count++;
    else
    {
      if (count > max_word)
      {
        max_word = count;
        word_start_index = i - count;
        count = 0;
      }
      else
        count = 0;
    }
  }
  int j = 0;
  for (int i = word_start_index; str[i] != ' '; i++)
  {
    longest_word[j] = str[i];
    j++;
  }
  longest_word[j] = '\0';
  printf("\nThe longest word in the string : ");
  puts(longest_word);
  printf("\nLength : %d", strlen(longest_word));
  return 0;
}