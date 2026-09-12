#include <stdio.h>
void fibo(int *n,int *a,int *b);
int main()
{
  int n,a = 0, b = 1;
  printf("Enter number of terms : ");
  scanf("%d", &n);
  printf("Fibonacci Series : \n");
  fibo(&n,&a,&b);
  return 0;
}
void fibo(int *n,int *a,int *b)
{
  int counter = 0;
  if (*n == 1)
    printf("%d", *a);
  else if (*n == 2)
    printf("%d  %d",*a,*b);
  else if (*n > 2)
  {
    printf("%d  ", *a);
    counter++;
    printf("%d  ", *b);
    counter++;
    while (1)
    {
      int c = *a + *b;
      counter++;
      if (counter == *n)
      {
        printf("%d  ", c);
        break;
      }
      printf("%d  ", c);
      *a = *b;
      *b = c;
    }
  }
  else
  printf("Number of terms > 0 !!");
}