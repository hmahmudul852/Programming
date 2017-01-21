#include<stdio.h>
int main()
{
    int a,b,n=15;
    for(a=1;a<=n;a++)
    {
        for(b=0;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

