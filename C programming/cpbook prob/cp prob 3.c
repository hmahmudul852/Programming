#include<stdio.h>
#include<ctype.h>

int main()

{
    int a;
    scanf("%d",&a);
    getchar();
    char st[10000];

    int i;
    while(a--)
    {
        gets(st);
        int count=1;
        for(i=0;st[i]!='\0';i++)
        {
            if(st[i]==' ')
            {

                if(isdigit(st[i-1])!=0)
                    count++;
            }
        }
        printf("%d\n",count);
    }


    return 0;
}
