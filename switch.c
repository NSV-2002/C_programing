#include<stdio.h>
void main()
// to show the day of the week
{
    int day;
    printf("enter the day (1-7) : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1 : printf("the day is monday");
        break;
    case 2 : printf("the day is tuesday");
        break;
    case 3 : printf("the day is wednesday");
        break;
    case 4 : printf("the day is thusday");
        break;
    case 5 : printf("the day is friday");
        break;
    case 6 : printf("the day is saturday");
        break;
    case 7 : printf("the day is sunday");
        break;
    default: printf("not a valid day");
        break;
    }

}