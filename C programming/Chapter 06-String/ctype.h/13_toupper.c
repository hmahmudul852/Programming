#include<stdio.h>
#include<ctype.h>
int main()
{
    char c1[15]="JGjJygnhNvnVNh";
    char c2[15];
    int i;
    for(i=0;i<15;i++)
    {
        c2[i]=toupper(c1[i]);
    }

    puts(c2);
    return 0;
}



