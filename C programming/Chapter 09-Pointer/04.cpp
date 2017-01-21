#include<stdio.h>
#include<stdlib.h>

int *changeArray(int *arr, int s)
{
    int *narr=(int *) malloc(sizeof(int) * s);

    for(int i=0; i<s; i++)
        narr[i]=arr[i]*2;

    return narr;
}

int main()
{
    int a[5]={9,6,4,5,1};

    int *get=changeArray(a,5);

    for(int i=0; i<5;i++)
        printf("%d ",get[i]);

    free(get);

    return 0;
}
