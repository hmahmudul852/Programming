#include<stdio.h>

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
    int l;
    scanf("%d",&l);
    int ar[10];
    while(l--)
    {
        int k,m=0;
        for(k=0;k<10;k++)
        {
            scanf("%d",&ar[k]);
            if(cqpr(ar[k])==1)
                m++;
        }
        printf("%d\n",m);
    }
    return 0;
}
