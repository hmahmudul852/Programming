#include<stdio.h>

//String is a null terminated array of character;
int main()
{
    char c0[]="c programming";
    char c1[]="abcd";
    char c2[5]="abcd";
    char c3[]={'a','b','c','d','\0'};
    char c4[5]={'a','b','c','d','\0'};

    printf("%s\n",c0);
    printf("%s",c4);

    return 0;
}
