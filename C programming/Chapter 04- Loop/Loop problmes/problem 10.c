#include<stdio.h>
int main()
{
    int a,n,diff,sum=0;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=1,diff=0;a<=n;a++,diff++)
    {
        sum=sum+a;
        a=a+diff;
    }
        printf("%d\n",sum);
    return 0;
}

