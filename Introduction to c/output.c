// this is a program for C printf()
#include<stdio.h>
int main()
{
    char ch;
    char str[100];
    printf("enter any character \n");
    scanf("%C",&ch);
    printf("enterd character is %c\n",ch);
    printf("enter a string(upto 100 character)\n");
    scanf("%s",&str);
    printf("Entered string is %s",str);
    return 0;
}