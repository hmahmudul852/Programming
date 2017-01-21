#include<stdio.h>
int main ()
{
    int i,n,total=0;
    printf("Now enter the limit of 'n': ");
    scanf("%d", &n);
    for (i=1; i<=n;i++)
    {
        total=total+i;
        printf("%d",i);
        if(i==n)
           continue;
        printf("+");
    }

    printf("=%d\n",total);
    return 0;
}

