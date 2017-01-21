#include<stdio.h>
int main()
{
    int x,a,b,n,rem;
    printf("Enter the limit of the series: ");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        for(a=2;a<x;a++)
        {
            rem=x%a;
            if(rem==0)
                break;
        }
        if(rem!=0)
            printf("%d ",x);
    }
    return 0;
}


