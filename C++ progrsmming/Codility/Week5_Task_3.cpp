#include<cstdio>
#include<cstring>

int main()
{
    int n,len;
    scanf("%d",&n);
    getchar();
    char st[105];
    while(n--)
    {
        gets(st);
        len=strlen(st);
        if(len<=10)
        {
            puts(st);
            printf("\n");
        }
        else
            printf("%c%d%c\n",st[0],len-2,st[len-1]);
    }
    return 0;
}
