#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,sum=0,x;
    cin>>n>>k;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar.rbegin(),ar.rend());
    if(n<=k)
        cout<<sum<<endl;
    else
    {
        int d=ceil((double)n/(double)k),x=0;
        for(int i=0;i<k;i++)
        {
            x=0;
            for(int j=k;j<d;j+=d)
                sum+=(x+1)*ar[j];
        }
            cout<<sum<<endl;
    }
    return 0;
}
