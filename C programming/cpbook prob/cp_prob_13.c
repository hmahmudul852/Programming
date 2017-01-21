#include<stdio.h>

int main()

{
    int a;
    scanf("%d",&a);
    getchar();

    char st[51];
    while(a--)
    {
        gets(st);
        int i;
        for(i=0;st[i]!='\0';i++)
        {
            if(st[i]=='L')
                st[i]=st[i-1];
            if(st[i]=='R')
                st[i]=st[i+1];
        }
        puts(st);
    }
    return 0;
}
