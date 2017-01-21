#include<stdio.h>
int main()
{
    int b,a,n,rem;
    printf("Enter limit of the series: ");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        int sum=0;
        for(a=1;a<b;a++)
        {
            rem=b%a;
            if(rem==0)
            {
              sum=sum+a;
            }
        }
        if(sum==b)
            printf("%d ",b);
    }
    return 0;
}


