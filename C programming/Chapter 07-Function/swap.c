#include<stdio.h>

void swap(int *a, int *b)
{
    int i;
    i= *a;
    *a= *b;
    *b=i;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a= %d, b= %d",a,b);
    return 0;
}
