#include <stdio.h>
int main()
{
  int n, alpha_count = 0, digit_count = 0, special_count = 0;
  printf("\nEnter password length : ");
  scanf("%d", &n);
  char password[n];
  printf("\nEnter password :\n");
  for (int i = 0; i < n; i++)
    scanf(" %c", &password[i]);
  for (int i = 0; i < n; i++)
  {
    if ((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z'))
      alpha_count++;
    else if (password[i] >= '0' && password[i] <= '9')
      digit_count++;
    else
      special_count++;
  }
  if (n < 6)
    printf("\nWeak Password !");
  if ((n >= 6 && n <= 10) && alpha_count != 0 && digit_count == 0 && special_count == 0)
    printf("\nModerate Password !");
  if ((n >= 6 && n <= 10) && alpha_count != 0 && digit_count != 0 && special_count == 0)
    printf("\nStrong Password !");
  if ((n > 10) && alpha_count != 0 && digit_count != 0 && special_count != 0)
    printf("\nVery Strong Password !");
  return 0;
}