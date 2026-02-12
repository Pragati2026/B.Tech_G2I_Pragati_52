#include <stdio.h>
int main(){
    float r,c,a;
    printf("Enter the Radius:");
    scanf("%f",&r);
    c=2*(22/7)*r;
    a=(22/7)*r*r;
    printf("The circumference and area of the circle are:%.2f & %.2f respectively",c,a);
    return 0;

}