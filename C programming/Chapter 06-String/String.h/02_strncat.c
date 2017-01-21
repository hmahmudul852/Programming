#include<stdio.h>
#include<string.h>

/*
adds 1st n characters of a string with another string
*/
int main()
{
    char a[20]="Mahmudul",b[20]=" Hasan";
    strncat(a,b,3);
    puts(a);
    return 0;
}


