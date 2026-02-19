#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    float d,e;
    printf("enter the coefficent of a quadratic equation :");
    scanf("%d%d%d",&a,&b,&c);
    d=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    e=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    printf("the 1st root is %f and 2nd is %f ",d,e);
    return 0;

}