#include<stdio.h>
int main()
{
    int a,b,c,d,n;
    printf("Enter how many line u want to print: ");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        for(b=n;b>=a;b--)
        {
            printf(" ");
        }
        for(c=0;c<2*a+1;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
