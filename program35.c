#include <stdio.h>
int main()
{
char ch;
printf("Enter a character(A-z or a-z):");
scanf("%c",&ch);
switch(ch){
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("Vowel");
break;
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Vowel");
break;
default:printf("Consonant !");
}
return 0;
}