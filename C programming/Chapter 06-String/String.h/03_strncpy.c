#include<stdio.h>
#include<string.h>

/*
copies or replaces 1st n characters of a string into another string
*/
int main()
{
    char a[20]="Mahmudul",b[20]=" Hasan";
    strncpy(a,b,3);
    puts(a);
    return 0;
}


