#include<stdio.h>
int main()
{
    int a,n,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(a=1;a<n;a++)
    {
        rem=n%a;
        if(rem==0)
        {
          sum=sum+a;
        }
    }
    if(sum==n)
        printf("The number %d is a perfect number",n);
    else
        printf("The number %d is not a perfect number",n);
    return 0;
}

