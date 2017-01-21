#include<cstdio>

int total=0;

int sum(int a)
{
    if(a > 0)
    {

        total=total+a;

        sum(--a);
    }
    return total;
}

int main()
{
    int total=sum(6);
    printf("%d",total);
    return 0;
}
