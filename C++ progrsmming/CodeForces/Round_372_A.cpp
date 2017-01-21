#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n,c;
    cin>>n>>c;
    long ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    long keep=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]-ar[i-1]>c)
            keep=i;
    }
    cout<<n-keep<<endl;
    return 0;
}
