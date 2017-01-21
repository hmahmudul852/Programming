#include<stdio.h>
int main ()
{
    int i,j;
    printf("Now enter the starting and ending point: ");
    scanf("%d%d", &i,&j);

    for (j; j>=i;j--)
        printf("%d\n",j);

    return 0;
}

