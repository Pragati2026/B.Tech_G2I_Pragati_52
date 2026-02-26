#include<stdio.h> 
int main()
{
    int a;
    printf("enter the age ");
    scanf("%d",&a);
    if (a>=0 && a<=12)
    {
        printf("CHILD");
    }
     else if (a>=13 && a<=17)
    {
        printf("TEEN");
    }
    else if (a>=18 && a<=60)
    {
        printf("ADULT");
    }
else 
    {
        printf("SENIOR CTITZEN");
    }
return 0;

}
