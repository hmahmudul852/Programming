#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int keep=n;
    vector<int> ar;
    while(keep--)
    {
        int a;
        cin>>a;
        ar.push_back(a);
    }
    if(n==1 && ar[0]==1)
        cout<<"YES\n";
    else if(n==1 && ar[0]==0)
        cout<<"NO\n";
    else
    {
        int sum=0;
        for(int i=0;i<ar.size();i++)
            sum+=ar[i];
        if(sum==n)
            cout<<"NO\n";
        else if(sum==n-1)
            cout<<"YES\n";
        else if(sum<n-1)
            cout<<"NO\n";

    }

    return 0;
}
