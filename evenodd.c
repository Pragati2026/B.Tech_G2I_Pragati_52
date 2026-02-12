#include<stdio.h>
int main()
{
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("even no");
    }
    else{
        printf("odd no.");
    }
    return 0;
}