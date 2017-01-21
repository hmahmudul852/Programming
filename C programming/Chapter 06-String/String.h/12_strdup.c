#include<stdio.h>
#include<string.h>
int main()
{
    char c1[]="mahmudul",c2[6]="hasan";
    c1=strdup(c2);
    puts(c1);
    return 0;
}

