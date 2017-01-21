#include<stdio.h>
int main()
{
    char c1[20],c2[20];
    gets(c1);
    gets(c2);
    int cmp=strcmp(c1,c2);
    if(cmp==0)
        printf("Strings r equal");
    else
        printf("Strings r not equal");
    return 0;
}
