#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==-1)
            k=i;
    }
    if(k>2 && k<n-3)
    {
        if((ar[k-1]+ar[k-2]+ar[k-3])==(ar[n-1]-(ar[n-2]+ar[n-3])))
           cout<<ar[k-1]+ar[k-2]+ar[k-3]<<endl;
        else if((ar[k-1]+ar[k-2]+ar[k-3])!=(ar[n-1]-(ar[n-2]+ar[n-3])))
           cout<<-1<<endl;
    }
    else if(k<3)
        cout<<ar[n-1]-(ar[0]+ar[1]+ar[2]+1)<<endl;
    else if(k<n-3)
        cout<<ar[k]+ar[k+1]+ar[k+2]+1<<endl;
    else if(k>n-4 && n>4)
        cout<<ar[k+1]-(ar[k-1]+ar[k-2])<<endl;
    else if(k==n-1)
        cout<<ar[n-2]+ar[n-3]+ar[n-4]<<endl;
    else
        cout<<-1<<endl;

    return 0;
}
