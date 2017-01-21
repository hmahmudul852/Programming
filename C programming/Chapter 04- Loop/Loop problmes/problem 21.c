#include<stdio.h>
int main()
{
    int a,b,n=5;
    for(a=1;a<=n;a++)
    {
        for(b=5;b>=a;b--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


