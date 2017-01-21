#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(a%2==1)
            sum=sum+a;
    }
    printf("Sum of the odd series is '%d'",sum);
    return 0;
}
