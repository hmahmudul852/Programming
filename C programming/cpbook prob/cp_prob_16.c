#include<stdio.h>

int main()
{
    int b;
    scanf("%d",&b);

    while(b--)
    {
        int a;
        scanf("%d",&a);
        int i,j;
        for(i=0;i<a;i++)
        {
            for(j=0;j<a;j++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
