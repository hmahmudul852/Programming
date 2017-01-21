#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,ma=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]>ma)
            ma=ar[i];
    }
    k=2*k+1;
    double t=(double)ma/k;
    t=ceil(t);
    cout<<(int)t<<endl;
    return 0;
}
