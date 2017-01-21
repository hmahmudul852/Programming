#include<stdio.h>
int main()
{
    //2D array initialization way-1
    int arr1[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
    //2D array initialization way-2
    int arr2[2][5]={1,2,3,4,5,6,7,8,9,10};

    int i,j,s=5;

    //Printing array 1
    printf("\t\tArray 1\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<s;j++)
            printf("%d ",arr1[i][j]);

        printf("\n");
    }

    //Printing array 2
    printf("\t\tArray 2\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<s;j++)
            printf("%d ",arr2[i][j]);

        printf("\n");
    }
    return 0;
}
