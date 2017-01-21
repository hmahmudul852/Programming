#include<stdio.h>
#include<string.h>
int main()
{
    char c1[10]="mahmudul";
    strset(c1,'a');
    puts(c1);
    strnset(c1,'#',3);
    puts(c1);
    return 0;
}


