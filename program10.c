#include<stdio.h>
int main()
{
float sub1,sub2,sub3,sub4,sub5;
printf("Enter marks of subject 1:\n");
scanf("%f",&sub1);
printf("Enter marks of subject 2:\n");
scanf("%f",&sub2);
printf("Enter marks of subject 3:\n");
scanf("%f",&sub3);
printf("Enter marks of subject 4:\n");
scanf("%f",&sub4);
printf("Enter marks of subject 5:\n");
scanf("%f",&sub5);
printf("Total marks:%f\n",sub1+sub2+sub3+sub4+sub5);
printf("Percentage marks:%f\n",(sub1+sub2+sub3+sub4+sub5)/500*100);

return 0;
}