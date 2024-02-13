#include<stdio.h>
void main()
{
    int num []={5,10,20,30},i,n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<4){
    for(i=0;i<=n;i++)
    {
        printf("%d\n",num[i]);
    } 
    }else{
      printf("enter correct vaild number");
    }
}