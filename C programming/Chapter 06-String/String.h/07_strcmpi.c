#include<stdio.h>
#include<string.h>
//Same as strcmp() function. But, this function negotiates case. “A” and “a” are treated as same.
int main()
{
    char c1[]="HaSsAn",c2[]="hAsSaN";
    int a;
    a=strcmpi(c1,c2);
    if(a==0)
        printf("The strings r equal");
    else
        printf("The strings r not equal");
    return 0;
}
