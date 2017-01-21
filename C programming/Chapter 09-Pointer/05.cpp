#include<stdio.h>
#include<stdlib.h>

int *add(int *a,int *b,int s)
{
    int *narr=(int *) malloc(sizeof(int) * s);
    for(int i=0;i<s;i++)
    {
        narr[i]=a[i]+b[i];
    }

    return narr;
}

int main()

{
    int a[5]={1,2,3,4,5},b[5]={10,9,8,7,6};
    int *get=add(a,b,5);
    for(int i=0;i<5;i++)
        printf("%d ",get[i]);

    free(get);

    return 0;
}
