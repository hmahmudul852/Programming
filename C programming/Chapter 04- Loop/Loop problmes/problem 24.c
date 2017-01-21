#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        for(b=n;b>a;b--)
            printf(" ");
        for(c=0;c<(b*2)+1;c++)
            printf("*");
        printf("\n");
    }
    for(d=0;d<n;d++)
    {
        for(e=-1;e<=d;e++)
            printf(" ");
        for(f=(n*2)-2;f>(d*2)+1;f--)
            printf("*");
        printf("\n");
    }
    return 0;
}
