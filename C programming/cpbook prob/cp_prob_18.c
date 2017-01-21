#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    while(x--)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a*2<=b && a*2<=c)
            printf("YES\n");

        else
            printf("NO\n");
    }
    return 0;
}
