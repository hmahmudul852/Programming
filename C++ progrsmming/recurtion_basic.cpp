#include<cstdio>

int printSeries(int n)
{
    if(n == 0)
        return 0;
    else
    {
        //printf("%d ",n);
        printSeries(--n);
        printf("%d ",n);
    }
}

int main()
{
    printSeries(5);

    return 0;
}
