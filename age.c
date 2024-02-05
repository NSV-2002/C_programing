#include<stdio.h>
void main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18)
    {
      printf("is an adult\n");
      printf("they can vote\n");
    }else{
        printf("is not an adult");
    }
}