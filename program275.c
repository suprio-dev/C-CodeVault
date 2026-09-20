
#include <stdio.h>

int main()
{
char str[100],count=0;
printf("Enter a string : ");
fgets(str,100,stdin);
for(int i=0;str[i]!='\0';i++)
count++;
printf("Length of the string is : %d\n",count-1);
return 0;
}