#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> ar(m);
    for(int i=0;i<m;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    int mi=1000;
    for(int i=0;i<=m-n;i++)
        mi=min(mi,ar[n-1+i]-ar[i]);
    cout<<mi<<endl;
    return 0;
}
