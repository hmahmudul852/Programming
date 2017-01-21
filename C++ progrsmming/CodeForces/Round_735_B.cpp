#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,n1,n2;
    cin>>n>>n1>>n2;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    int mi,ma;
    mi=min(n1,n2);
    ma=max(n1,n2);
    double a=0.0,b=0.0,f=0.0;
    for(int i=n-1;i>=n-mi;i--)
        a+=ar[i];
    for(int i=n-mi-1;i>=n-mi-ma;i--)
        b+=ar[i];
    f=a/mi+b/ma;
    printf("%.8lf",f);
    return 0;
}
