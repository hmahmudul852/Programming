#include<stdio.h>
int main()
{
    int a,n,first=0,second=1,next;
    printf("Enter the limit of the series: ");
    scanf("%d",&n);
    printf("0 1 ");
    for(a=1;a<=n;a++)
    {
        next=first+second;
        first=second;
        second=next;
        printf("%d ",next);
    }
    return 0;
}

