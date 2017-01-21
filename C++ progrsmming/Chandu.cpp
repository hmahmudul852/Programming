#include<cstdio>
#include<cstring>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    char s[35];
    while(t--)
    {
        gets(s);
        int len=strlen(s);
        for(int i=0;i<len;i++)
            if(s[i]==s[i+1])
                s[i]='0';
        for(int i=0;i<len;i++)
            if(s[i]!='0')
                printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}
