#include<stdio.h>

void printarr(int a[], int sz)
{
    int i;
    for(i=0;i<sz;i++)
        printf("%d ",a[i]);
}

int main()
{
    int ar[5];
    int i;
    for(i=0;i<5;i++)
        scanf("%d",&ar[i]);
    printarr(ar,5);

    return 0;
}
