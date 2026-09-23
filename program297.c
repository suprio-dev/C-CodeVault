#include <stdio.h>
int main()
{
  char str[100], shortest_word[100];
  int count = 0, min_word = 100, word_start_index = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] != ' ' && str[i] != '\n')
      count++;
    else
    {
      if (count < min_word)
      {
        min_word = count;
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
    shortest_word[j] = str[i];
    j++;
  }
  shortest_word[j] = '\0';
  printf("\nThe shortest word in the string : ");
  puts(shortest_word);
  return 0;
}