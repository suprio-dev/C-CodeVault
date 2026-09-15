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
    if (marks[i] >= 80)
      c++;
  }
  if(c>0)
  printf("\nTotal number of students having marks >= 80 is : %d", c);
  else
  printf("No one scored more then or equal to 80 !");
  return 0;
}