#include<cstdio>
#include<cctype>

int main()
{
    int line;
    scanf("%d",&line);
    getchar();
    while(line--)
    {
        char st[10];
        gets(st);
        int temp,temp1;
        char c=st[1];
        temp=st[0]-'0';
        temp1=st[2]-'0';
        if(temp==temp1)
            printf("%d\n",temp*temp1);
        else if(isupper(c)!=0)
            printf("%d\n",temp1-temp);
        else if(islower(c)!=0)
            printf("%d\n",temp1+temp);
    }
    return 0;
}
