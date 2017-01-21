#include<stdio.h>
int main()
{
    char c1[20],c2[20];
    gets(c1);
    gets(c2);
    strupr(c1);
    strlwr(c2);
    printf("%s\n%s",c1,c2);

    return 0;
}

