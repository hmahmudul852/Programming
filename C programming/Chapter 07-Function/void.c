#include<stdio.h>

void sum(int a,int b)
{
    int re=a+b;

    printf("%d",re);
}

int main()
{
    int c,d,t;
    scanf("%d%d",&c,&d);

    //t=sum(c,d);
    //printf("%d",t);
    sum(c,d);

    return 0;
}
