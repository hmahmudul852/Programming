#include<stdio.h>
int main()
{
    char c1[20],c2[20];
    gets(c1);
    gets(c2);
    strcpy(c2,c1);
    puts(c2);
    return 0;
}
