#include<stdio.h>

int main()
{
    int a;
    printf("Enter row number: ");
    scanf("%d",&a);
    int i,j,c=0;
    for(i=0;i<a;i++)
    {

        for(j=1;j<=i+1;j++)
        {
            c++;
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}

