#include <stdio.h>
int main()
{
int marks;
printf("Enter your marks : ");
scanf("%d",&marks);
if(marks <=100 && marks >= 90)
printf("Grade A");
else if(marks >=75 && marks <90)
printf("Grade B");
else if (marks >=60 && marks < 75)
printf("Grade C");
else if (marks >= 40 && marks < 60)
printf("Grade D");
else 
printf("Fail");
return 0;
}