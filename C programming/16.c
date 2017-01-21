#include<stdio.h>
int main()
{
    int i,n,difr=1,total;
    printf("Enter the limit of 'n': ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+difr++)
    {
        total=total+i;
        printf("%d",i);
        if(i==n)
            continue;
        printf("+");
    }
    printf("=%d",total);
    return 0;
}
