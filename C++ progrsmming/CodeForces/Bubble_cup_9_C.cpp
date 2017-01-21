#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int keep=n;
    vector<int> lz(n),tk(n);
    for(int i=0;i<n;i++)
        cin>>lz[i];
    sort(lz.begin(),lz.end());
    for(int i=0;i<n;i++)
        tk[i]=lz[--keep];
    long long ans=0;
    for(int i=0;i<n;i++)
        ans+=(long long)lz[i]*tk[i];
    ans=ans%10007;
    cout<<ans<<endl;
    return 0;
}
