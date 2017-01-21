#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,mi=2147483647,in=0;
    cin>>n;
    long long ar[n];
    for(long long i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]<mi)
        {
            mi=ar[i];
            in=min(i,in);
        }
    }
    if(in==0)
        cout<<2<<endl;
    else
        cout<<in+1<<endl;
    return 0;
}
