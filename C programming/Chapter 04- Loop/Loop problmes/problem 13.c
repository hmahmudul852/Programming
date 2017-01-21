// print this series 1+(1+2)+(1+2+3)+…..+(1+2+3+N)
#include<stdio.h>
int main()
{
    int a,b,n,sum=0;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(a!=1)
            printf("(");
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
            if(b<a)
                printf("+");
        }
        if(a!=1)
            printf(")");
        if(a<n)
            printf("+");
    }
    return 0;
}
