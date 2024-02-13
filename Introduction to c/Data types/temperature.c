#include<stdio.h>
void main()
{
    //program to convert degree celcius to ferinhite
    //(0°C × 9/5) + 32 = 32°F
    float f,c;
    printf("enter the value in degree celcius");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("ferinhite :%f",f);
}
