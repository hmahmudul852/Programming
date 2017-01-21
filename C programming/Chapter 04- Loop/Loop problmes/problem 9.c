#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a=a+3)
    {
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}

