#include<stdio.h>
void main()
// program to find the percentage of the student
{
 float m,b,p,c,e,per,total;
 printf("enter the marks of math :\n");
 scanf("%f",&m);
 printf("enter the marks of biology :\n");
 scanf("%f",&b);
 printf("enter the marks of physics:\n");
 scanf("%f",&p);
 printf("enter the marks of chemistry :\n");
 scanf("%f",&c);
 printf("enter the marks of english :\n");
 scanf("%f",&e);
 total=m+b+p+c+e;
per =(total/5)*100;
 printf("percentage is :%f",p);
}