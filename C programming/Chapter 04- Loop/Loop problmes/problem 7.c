#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("Enter the limit of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(a%2==0)
            sum=sum+a;
    }
    printf("The sum of even series is '%d'",sum);
    return 0;
}

