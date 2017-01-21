#include<stdio.h>
int main ()
{
    int i,n;
    printf("Now enter the limit of 'n': ");
    scanf("%d", &n);
    for (i=1; i<=n;i++)
    {
        printf("%d\n",i);
        if(i==15)
            break;
    }
    return 0;
}

