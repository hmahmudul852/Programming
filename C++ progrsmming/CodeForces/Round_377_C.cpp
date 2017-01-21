#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<unsigned long long> a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.rbegin(),a.rend());
    unsigned long long keep=a[0]-1;
    unsigned long long sum=0;
    if(a[1]<keep)
        sum+=keep-a[1];
    if(a[2]<keep)
        sum+=keep-a[2];
    if(sum<0)
        sum=0;
    cout<<sum<<endl;
}
