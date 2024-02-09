//program to add n natural number 
#include<stdio.h>
void main()
{
    int i,n,sum;
    printf("enter the value of n :");
    scanf("%d",&n);
//     i=1;
//     do
//     {
//         sum=sum+i;
//         i++;
//     } while (i<=n);
//   printf("%d",sum);
for(i=1;i<=n;i++)
{
    sum+=i;
}
printf("%d",sum);
}
