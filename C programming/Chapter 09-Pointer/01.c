#include<stdio.h>

void ai (int *ar, int *sz)
{
    int i;
    for(i=0;i< *sz;i++)
        printf("%d ",ar[i]);
}

int main()
{
    int a=5, ar[a];
    int i;
    for(i=0;i<a;i++)
        ar[i]=i+1;
    ai(&ar,&a);

    return 0;
}
