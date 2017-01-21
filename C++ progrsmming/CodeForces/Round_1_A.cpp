#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    double a;
    cin>>n>>m>>a;
    double ans=ceil(n/a),ans1=ceil(m/a);
    unsigned long long x=ans,y=ans1;
    unsigned long long z=x*y;
    cout<<z<<endl;
    return 0;
}
