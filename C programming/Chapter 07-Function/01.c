#include<stdio.h>

int sum(int a,int b)
{
    int re=a+b;
    return re;
}

int main()
{
    int c,d,t;
    scanf("%d%d",&c,&d);

    //t=sum(c,d);
    //printf("%d",t);
    printf("%d",sum(c,d));

    return 0;
}
