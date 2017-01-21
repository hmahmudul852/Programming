#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,b,av,sum=0;
    for(i=0;i<a;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            scanf("%d",&b);
            sum=sum+b;
        }
            av=sum/5;
            printf("%d\n",av);

    }
    return 0;
}
