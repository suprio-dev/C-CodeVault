#include <stdio.h>
int main()
{
char ch;
printf("Enter a character(A-Z or a-z) :");
scanf("%c",&ch);
if((ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') || (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'))
printf("Vowel");
else 
printf("Consonant");
return 0;
}