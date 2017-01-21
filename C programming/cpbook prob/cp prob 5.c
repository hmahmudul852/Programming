#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    getchar();
    int i,j,x;
    char st[4];
    for(i=0;i<a;i++)
    {
        int r=0;
        gets(st);
        for(j=0;st[j]!='\0';j++)
        {
            x=(int)st[j];
            r+=x;
        }
        printf("%d\n",r);
    }
    return 0;
}


