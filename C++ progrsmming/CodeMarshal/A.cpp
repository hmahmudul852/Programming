#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ca=1;
    cin>>t;
    while(t--)
    {
        int k;
        long long n;
        cin>>k;
        if(k==0)
        {
            cin>>n;
            cout<<"Case "<<ca<<":"<<endl;
            cout<<n/3<<endl;
            cout<<(4*n)/9<<endl;
            cout<<(2*n)/9<<endl;
        }
        else if(k==1)
        {
            cin>>n;
            long long t;
            t=(9*n)/2;
            cout<<"Case "<<ca<<":"<<endl;
            cout<<t/3<<endl;
            cout<<(4*t)/9<<endl;
            cout<<t<<endl;
        }
        ca++;
    }
    return 0;
}
