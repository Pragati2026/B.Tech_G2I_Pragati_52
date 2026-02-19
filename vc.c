#include<stdio.h>
int main()
{
    char c;

    printf("enter the alphabet");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("the alphabet is vowels ");
    } 
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("the alphabet is vowels ");
    }
    else {
        printf("the alphabet is consonent");
    }
    return 0;
}