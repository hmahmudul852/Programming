#include<stdio.h>
int main ()
{
    int i,n,total=0;
    printf("Enter the limit that u want"
           " to sum only the even numbers: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
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
