#include<stdio.h>
void main()
//this is the program to preform operations on int 
{
    int a, b;
    printf("\nenter the value of a ");
    scanf("%d",&a);
    printf("\nenter the value of b ");
    scanf("%d",&b);
    printf("\nthe addtion of a and b = %d",a+b);
    printf("\nthe substraction of a and b = %d",a-b);
    printf("\nthe multiplication of a and b = %d",a*b);
    printf("\nthe division of a and b = %f",(float)a/b); 
}