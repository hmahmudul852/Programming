#include<bits/stdc++.h>

using namespace std;

int Binary(long long A[],long long ele,int sz)
{
    int l=0;
    int h=sz-1;
    int m,a=h,flag=0;
    while(l<=h)
    {
        m=(l+h)/2;
        if(A[m]==ele)
        {
            flag=1;
            if(m<a)
                a=m;
        }
        if(A[m]>=ele)
            h=m-1;
        else if(A[m]<=ele)
            l=m+1;
    }
    if(a>=0 && flag==1)
        return a;
    else
        return -1;
}

int main()
{
    //ios_base::sync_with_stdio(0);
    long long n,q;
    scanf("%lld%lld",&n,&q);
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    while(q--)
    {
        long long b;
        scanf("%lld",&b);
        printf("%d\n",Binary(ar,b,n));
    }
    return 0;
}
