#include<stdio.h>
int main()
{
    char c1[20],c2[20];
    gets(c1);
    gets(c2);
    strcat(c1,c2);
    puts(c1);
    return 0;
}
