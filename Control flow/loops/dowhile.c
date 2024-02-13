#include<stdio.h>
void main()
//generating table of the number using do while loop
{
    int i,n;
    printf("enter the value of n :");
    scanf("%d",&n);
    i=0;
    do
    {
        i++;
        printf("%d\n",i*n);
    } while (i<=10);
    
}