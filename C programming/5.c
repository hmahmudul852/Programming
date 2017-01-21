#include<stdio.h>
int main ()
{
    int i,j;
    printf("Now enter the starting and ending point: ");
    scanf("%d%d", &i,&j);

    for (i; i<=j;i++)
        printf("%d\n",i);

    return 0;
}

