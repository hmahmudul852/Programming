#include<stdio.h>
int main()
{
    int col,row;
    printf("Enter size of column and row: ");
    scanf("%d%d,",&col,&row);
    int a[col][row];
    int i,j;
    printf("Now input numbers in array: ");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
            scanf("%d",&a[i][j]);
    }
    int k,l;
    for(k=0;k<col;k++)
    {
        for(l=0;l<row;l++)
            printf("%d ",a[k][l]);
        printf("\n");
    }
    return 0;
}
