#include <stdio.h>
void fibo(int n);
int main()
{
  int n;
  printf("Enter number of terms : ");
  scanf("%d", &n);
  printf("Fibonacci Series : \n");
  fibo(n);
  return 0;
}
void fibo(int n)
{
  int a = 0, b = 1, counter = 0;
  if (n == 1)
    printf("%d", a);
  else if (n == 2)
    printf("%d", b);
  else if (n > 2)
  {
    printf("%d  ", a);
    counter++;
    printf("%d  ", b);
    counter++;
    while (1)
    {
      int c = a + b;
      counter++;
      if (counter == n)
      {
        printf("%d  ", c);
        break;
      }
      printf("%d  ", c);
      a = b;
      b = c;
    }
  }
}