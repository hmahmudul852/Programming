#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a=a+2)
    {
        sum=sum+(a*a);
    }
    printf("%d",sum);
    return 0;
}

