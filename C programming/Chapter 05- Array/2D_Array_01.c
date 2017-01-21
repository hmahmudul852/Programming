#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={1,2,3,4,5,6,7,8,9},c[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    int k,l,m,n;
    for(k=0;k<3;k++)
    {
        for(m=0;m<3;m++)
            printf(" __");
        printf("\n");
        for(l=0;l<3;l++)
        {
            printf("|");
            printf("%2.2d",c[k][l]);
        }

        printf("|");
        printf("\n");
    }
    for(n=0;n<3;n++)
        printf(" __");

    return 0;
}
