#include<stdio.h>
int main ()
{
    int i,n,difr=2;
    printf("Enter the limit of 'n': ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+difr++)
        printf("%5d",i);


    return 0;
}
