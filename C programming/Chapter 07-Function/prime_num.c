#include<stdio.h>

/*int cqpr(int a)
{
    int r,c;
    r=sqrt(a);
    int i,isprime;
    for(i=2;i<=r;i++)
    {
        if(a%i==0){
            isprime=0;
            break;
        }
        else
            isprime=1;
    }
    return isprime;
}*/

int cqpr(int a)
{
    int i,isprime=1;

    for(i=2; i<=sqrt(a); i++)
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
    int in;
    while(scanf("%d",&in) && in!=0)
    {
        if(cqpr(in)==0)
            printf("NOT PRIME\n");
        else
            printf("PRIME\n");
    }
    return 0;
}
