#include<stdio.h>
void main()
//genrating table of the number using for loop
{
    int i,n;
    printf("enter the value of n :");
    scanf("%d",&n);
    for (i=10;i>=1;i--)
    {
    printf("%d\n",i*n);
    }
    
}