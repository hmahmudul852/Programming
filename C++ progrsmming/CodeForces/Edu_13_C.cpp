#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a,b,p,q,x=0,y=0,sum=0;
    cin>>n>>a>>b>>p>>q;
    int ar[n+1];
    memset(ar,0,n+1);
    if(p<q)
    {
        while(x<=n)
        {
            x+=a;
            ar[x]=p;
        }
        while(y<=n)
        {
            y+=b;
            ar[y]=q;
        }
    }
    else if(q<p)
    {
        while(x<=n)
        {
            x+=a;
            ar[x]=p;
        }
        while(y<=n)
        {
            y+=b;
            ar[y]=q;
        }
    }
    else
    {
         while(x<=n)
        {
            x+=a;
            ar[x]=p;
        }
        while(y<=n)
        {
            y+=b;
            ar[y]=q;
        }
    }
    for(long long i=1;i<=n+1;i++)
        sum+=ar[i];
    cout<<sum<<endl;
    return 0;
}
