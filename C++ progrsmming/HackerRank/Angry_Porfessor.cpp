#include<bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,st,cou=0;
        cin>>n>>k;
        while(n--)
        {
            cin>>st;
            if(st<=0)
                cou++;
        }
        if(cou<k)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
