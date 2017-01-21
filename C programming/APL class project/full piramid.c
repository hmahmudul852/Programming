#include<stdio.h>

int main()
{
    int a;
    printf("Enter row number: ");
    scanf("%d",&a);
    int i,j,k;

    for(i=1;i<=a;i++)
    {
        for(j=0;j<a-i;j++)
            printf(" ");
        for(j=0;j<((i*2)-1);j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
