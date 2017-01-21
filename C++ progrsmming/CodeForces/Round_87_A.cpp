#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int sum=0,ma=0;
    while(n--)
    {
        cin>>a>>b;
        sum-=a;
        sum+=b;
        ma=max(ma,sum);
    }
    cout<<ma<<endl;
    return 0;
}
