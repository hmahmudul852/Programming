#include<vector>
#include<iostream>
#include<cstdio>

#define M 1000000
#define N 500000

using namespace std;

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
    vector<int> ar;
    int a=3,b;

    while(scanf("%d",&b))
    {
        if(b==0)
            break;
        int i;
        for(i=0;i<=N;i++)
            if(Pr[i]>=a && Pr[i]<=b && Pr[i]!=0)
                ar.push_back(Pr[i]);
        int one,two,c,d;
        for(int i=0;i<ar.size();i++)
        {
            one=ar[i];
            for(int j=i+1;j<ar.size();j++)
            {
                two=ar[j];
                if(b==(one+two))
                {
                    c=one;
                    d=two;
                }
            }
        }
        printf("%d = %d + %d\n",b,c,d);
    }
    return 0;
}
