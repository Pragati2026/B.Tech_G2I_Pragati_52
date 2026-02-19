#include<stdio.h>
int main()
{
    int a,b;
    float c;
    char op;
    printf("enter he value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the operator");
    scanf(" %c",&op);
    switch(op){
        case'+':
        c=a+b;
        printf("addition:%f",c);
        break;
        case'-':
        c=a-b;
         printf("subtract:%f ",c);
        break;
        case'*':
        c=a*b;
        printf("multiply: %f",c);
        break;
        case'/':
        c=a/b;
        printf("divide:%f ",c);
        break;
    }
    return 0;
}