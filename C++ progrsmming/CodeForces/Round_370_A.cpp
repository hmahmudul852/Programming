#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ar[n+1],ke[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    for(int i=1;i<n;i++)
    {
        cout<<ar[i]+ar[i+1]<<" ";
    }
    cout<<ar[n]<<endl;
    return 0;
}
