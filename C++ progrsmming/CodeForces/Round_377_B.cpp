#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    int a[n],mi=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if((a[i-1]+a[i])<k)
        {
            sum+=k-(a[i-1]+a[i]);
            a[i]+=k-(a[i-1]+a[i]);
        }
    }

    cout<<sum<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        if(i<n)
            cout<<" ";
    }

    return 0;
}
