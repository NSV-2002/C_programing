#include<stdio.h>
void main()
//to check the student is pass or fail
{
    int marks;
    printf("enter your marks");
    scanf("%d",&marks);
    if(marks<30)
    {
        printf("sorry you fail");
    }else if (marks>=30&&marks<100)
    {
        printf("congratulation you passed");
    }if(marks>100)
    {
        printf("please enter correct marks");
    }
    

}