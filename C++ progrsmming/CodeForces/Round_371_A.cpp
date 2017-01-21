#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long l1,r1,l2,r2,k,ans;
    cin>>l1>>r1>>l2>>r2>>k;
    long long ma,mi;
    ma=max(l2,l1);
    mi=min(r1,r2);
    ans=mi-ma;
    if(k<=mi && k>=ma)
            ans--;
    if(ans<0)
        cout<<0<<endl;
    else
        cout<<ans+1<<endl;
    return 0;
}
