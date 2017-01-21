#include<stdio.h>
int main ()
{
    int i,n;
    printf("Now enter the limit of 'n': ");
    scanf("%d", &n);
    for (i=1; i<=n;i++)
    {
        if(i==15)
            continue;
        printf("%d\n",i);
    }
    return 0;
}

