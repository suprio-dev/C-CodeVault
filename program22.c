#include <stdio.h>
int main()
{
char ch;
printf("Enter a character(a-z or A-Z or 0-9 or any special character) :");
scanf("%c",&ch);
if ((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
printf("Alphabet");
else if(ch>='0' && ch <= '9')
printf("Digit");
else
printf("Special Character");
return 0;
}