#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n],i,count=0,cou=0;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]!=0)
            count++;
    }
    printf("%d",count);
    return 0;
}
