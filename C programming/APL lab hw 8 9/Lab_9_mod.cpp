#include<cstdio>

int mod(int a,int b)
{
    if(a < b)
        return a;
    else
        mod(a-b,b);
}

int main()
{
    int a=8,b=4;
    printf("%d",mod(a,b));
    return 0;
}
