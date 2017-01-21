#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={9,8,7,6,5,4,3,2,1},c[3][3];
    int i,j,m,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(m=0;m<3;m++)
                sum=sum+(a[i][m]*b[m][j]);
            c[i][j]=sum;
        }
    }
     int k,l;
     for(k=0;k<3;k++)
     {
         for(l=0;l<3;l++)
            printf("%3d ",c[k][l]);
        printf("\n");
     }
    return 0;
}
