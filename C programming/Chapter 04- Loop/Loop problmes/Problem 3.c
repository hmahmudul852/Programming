#include<stdio.h>
int main()
{
    int a,n,s=0;
    printf("Enter the value of 'N'");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        s+=a;
    }
        printf("%d",s);
    return 0;
}

