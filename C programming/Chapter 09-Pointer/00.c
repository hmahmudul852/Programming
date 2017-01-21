#include<stdio.h>

void swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a=15,b=32,c=a;

    printf("a= %d b= %d\n",a,b);

    swap(&a,&b);
    printf("a= %d b= %d",a,b);

    return 0;
}
