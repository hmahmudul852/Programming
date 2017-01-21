#include<stdio.h>
int main()
{
    int a,mt[5];
    scanf("%d",&a);
    int i,j,x,y;
    for(i=0;i<a;i++)
    {
        x=-1;y=101;
        for(j=0;j<5;j++)
        {
            scanf("%d",&mt[j]);
            if(mt[j]>x)
                x=mt[j];
            if(mt[j]<y)
                y=mt[j];
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
