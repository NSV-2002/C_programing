#include<stdio.h>
void main()
{
    // this is the program to generate table of given number
    int n,i;
    printf("enter the value of n ");
    scanf("%d",&n);
    i=0;
    while (i<10)
    { 
     i++;
     printf("%d\n",i*n);
    }
    
}