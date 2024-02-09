#include<stdio.h>
void main()
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