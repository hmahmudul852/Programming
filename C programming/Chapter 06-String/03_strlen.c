#include<stdio.h>
int main()
{
    char c1[20];
    gets(c1);
    puts(c1);

    int s=strlen(c1);
    printf("\nThe size is= %d",s);
    return 0;
}
