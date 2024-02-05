#include<stdio.h>
void main()
//program to check the given number divisible by 2
{
    int x;
    printf("enter the value of x: ");
    scanf("%d",&x);
    if(x%2 == 0)
    {
        printf("\nthe number is divisible by 2");
        printf("\nthe answer is = %d",x/2);
    }else{
      printf("the number is not divisible by 2");
    }
}