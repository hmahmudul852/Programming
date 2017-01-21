#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    printf("Enter the the value of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        printf("\n");
        for(b=1;b<=a;b++)
            printf("*");
    }
    for(c=1;c<=n-1;c++)
    {
        printf("\n");
        for(d=n-1;d>=c;d--)
            printf("*");
    }
    return 0;
}
