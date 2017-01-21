#include<stdio.h>

int main()
{
    int line;
    scanf("%d",&line);

    while(line--)
    {
        int a;
        scanf("%d",&a);
        int i,j;

        for(i=1;i<=a;i++)
        {
            for(j=0;j<a-i;j++)
                printf(" ");
            for(j=0;j<((i*2)-1);j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
