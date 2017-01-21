#include<stdio.h>

int cqpr(int a)
{
    int i,isprime=1,x=sqrt(a);

    for(i=2; i<=x; i++)
    {
        if(a%i==0)
        {
            isprime=0;
            break;
        }
    }

    if(isprime==1 && a>1)
        return isprime;
    else
        return 0;

}


int main()
{
    int N;
    scanf("%d",&N);

    while(N--)
    {
        int in;
        scanf("%d",&in);

        if(cqpr(in)==0)
            printf("Not Prime\n");
        else
            printf("Prime\n");
    }
    return 0;
}

