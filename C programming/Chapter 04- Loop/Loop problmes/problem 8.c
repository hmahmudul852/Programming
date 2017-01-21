#include<stdio.h>
int main()
{
    int a,n,diff;
    printf("Enter the value of 'N': ");
    scanf("%d",&n);
    for(a=1,diff=0; a<=n; a++,diff++)
    {
        a=a+diff;
        printf("%d\n",a);
    }
    return 0;
}

