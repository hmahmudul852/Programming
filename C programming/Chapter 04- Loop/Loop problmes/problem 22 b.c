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
        for(d=a;d>=1;d--)
        {
            printf("%d",d);
        }
        for(c=0;c<=a;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}

