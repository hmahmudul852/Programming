//17. WAP to print first nth prime where n is an integer.
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

    int n;
    printf("Enter the value of 'n': ");
    scanf("%d",&n);
    printf("The %dth prime numbers are:\n",n);

    int i;
    for(i=0;i<=n;i++)
    {
        if(Pr[i]==0)
            break;
        else
            printf("%d\n",Pr[i]);
    }

    return 0;
}
