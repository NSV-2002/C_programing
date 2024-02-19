#include<stdio.h>
void main()
// program to calculate average
{
    char name[30];
    int a, b, c;
    float result;
    printf("\n please enter a name : ");
    scanf("%s",name);
    printf("\n Please enter thr mark 1 : ");
    scanf("%d",&a);
    printf("\n please enter the mark 2 : ");
    scanf("%d",&b);
    printf("\n please enter the mark 3 : ");
    scanf("%d",&c);
    result = (a+ b+c)/3;
    printf("\n average =%f",result);
    getch();
}