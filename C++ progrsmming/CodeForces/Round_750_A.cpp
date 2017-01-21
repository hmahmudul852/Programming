#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int l=240-k;
    int t,tt=0;
    for(int i=1;i<=n;i++)
    {
        tt+=i*5;
        if(tt>l) break;
        t=i;
    }
    cout<<t<<endl;
    return 0;
}
