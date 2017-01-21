#include<stdio.h>
int main()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    x=(2*(a+b));
    y=a+b+c;
    if(x<y)
        printf("%d",x);
    else
        printf("%d",y);
    return 0;
}
