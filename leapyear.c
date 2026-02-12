#include<stdio.h>
int main()
{
    int a;
    printf("enter the year");
    scanf("%d",&a);
    if (a%4==0 && a%100!=0)
    {
        printf("the year is leap year");
    }
    else if  (a%100==0 && a%400==0)
    {
        printf("the year is leap year");    
    }
    else 
    {
        printf("the year is not aleap year");
    }
    return 0;
}