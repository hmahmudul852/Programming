#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,co=0,ce=0,mi=1000000;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0)
                ce++;
            else if(ar[i]%2!=0)
                co++;
            if(ar[i]!=1)
                mi=min(mi,ar[i]);
        }
        if(ce>0 && co>0)

    }
    return 0;
}
