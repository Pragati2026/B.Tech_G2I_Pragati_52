#include<stdio.h>
int main()
{
    int a,b,c,d,e,p;
    printf("enter the marks of five subject");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/5;
    printf("ther percentage is %d",p);
    if(p>=90 && p<=100)
    {
        printf("grade is A");
    }
    else if (p>=80 && p<90)
    {
        printf("the grade is B");
    }
    else if (p>=60 && p<80)
    {
        printf("the grade is c");
    
    }
    else 
    {
        printf("the grade is D");
    }
    return 0;
}
