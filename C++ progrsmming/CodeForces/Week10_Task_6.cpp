#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int ans=(w*(2*k+(w-1)*k))/2;
    ans=ans-n;
    if(ans<0)
        cout<<0<<"\n";
    else
        cout<<ans<<"\n";
    return 0;
}
