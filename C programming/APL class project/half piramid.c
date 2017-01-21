#include<stdio.h>

int main()
{
    int a;
    printf("Enter row number: ");
    scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
