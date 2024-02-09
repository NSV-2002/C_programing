#include<stdio.h>
void main()
// program to find the factorial of a number 
{
    int i,n,fac;
    printf("enter the value of n");
    scanf("%d",&n);
    fac=1;
    for(i=1;i<=n;i++)
    {
     fac=fac*i;
    }
    printf("%d",fac);
}