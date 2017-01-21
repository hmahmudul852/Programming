//  Bismillah hir rahmanir raheem. Thanks to Allah for everything.

//18 : WAP to find prime numbers between an interveal of [a,b].
#include<stdio.h>

#define M 1000000
#define N 500000

int cPr[M],Pr[N];

void sieve (int n)
{
    int i,j=0;
    for(i=2;i<=n;i++)
    {
        if(cPr[i]==0)
        {
            Pr[j]=i;
            j++;

            int k;
            for(k=i+i;k<=n;k+=i)
                cPr[k]=1;
        }
    }
}

int main()
{
    sieve(500000);

    int a=3,b;
    printf("Enter the value of 'a' and 'b': ");
    scanf("%d",&b);
    printf("The prime numbers between %d to %d:\n",a,b);

    int i;
    for(i=0;i<=N;i++)
        if(Pr[i]>=a && Pr[i]<=b && Pr[i]!=0)
            printf("%d\n",Pr[i]);

    return 0;
}
