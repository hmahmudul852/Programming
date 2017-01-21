#include<stdio.h>
int main()
{
    char *s="Hello World!";  //string constant / Read-only
    puts(s);
    printf("%s\n",s);
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}
