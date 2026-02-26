#include<stdio.h> 
int main()
{
    int a,b,c;
    printf("enter the sides of triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b){
    {
        printf("the triangle can be formed \n  ");
    }
    if (a==b && a==c)
    {
        printf("the triangle is equilateral");
    }
    else if (a==b || b==c || a==c){
        printf("the triangle isosceles ");
    }
    else {
        printf("the triangle is scalene ");
    }}
    else 
    {
        printf("the triangle can  not be formed");
    }
    return 0;
}