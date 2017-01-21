#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,c;
    double b,av,sum=0;
    for(i=0;i<a;i++)
    {
        sum=0;
        scanf("%d",&c);
        for(j=0;j<c;j++)
        {
            scanf("%lf",&b);
            sum=sum+b;
        }
            av=sum/c;
            printf("%.2lf\n",av);

    }
    return 0;
}

