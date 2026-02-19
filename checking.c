#include<stdio.h>
int main()
{
    char ss;
    printf("enter the value of a to be checked");
    scanf("%c",&ss);
    if( ss>='0'&&ss<='9'){
        printf("%c the given variable is a digit",ss);
    }
    else if (ss>='a'&& ss<='z'|| ss>='A'&& ss<='Z')
        {
        printf("%c the given variable is a ALPHABET",ss);
    }
    else {
        printf(" %c is special character",ss);
    }
 return 0;
    }