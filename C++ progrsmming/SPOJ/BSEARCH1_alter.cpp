#include<bits/stdc++.h>

using namespace std;

int Binary(long long A[],long long ele,int sz)
{
    int low=0;
    int high=sz-1;
    int mid;
    int res=-1;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(A[mid]==ele)
        {
            high=mid-1;
            res=mid;
        }
        else if(A[mid]>ele)
            high=mid-1;
        else if(A[mid]<ele)
            low=mid+1;
    }
    return res;

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
}

