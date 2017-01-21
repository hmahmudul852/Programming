#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    getchar();

    while(a--)
    {
        char ar[1000000];
        gets(ar);

        int count=1;
        int i;
        for(i=0;ar[i]!='\0';i++)
        {
                if(ar[i]==' ')
                {
                     if(isalpha(ar[i-1])!=0||ar[i-1]=='.')
                            count++;
                }
        }

        printf("%d\n",count*420);
    }
    return 0;
}
