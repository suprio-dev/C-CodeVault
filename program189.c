#include <stdio.h>
int main()
{
  int marks[5], c = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter marks of roll no.%d : ", i + 1);
    scanf("%d", &marks[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    if (marks[i] < 50)
    {
      c++;
      printf("\nMarks of roll no.%d is : %d\n", i + 1, marks[i]);
    }
  }
  if (c == 0)
    printf("\nEveryone scored more than 50 marks !");
  return 0;
}