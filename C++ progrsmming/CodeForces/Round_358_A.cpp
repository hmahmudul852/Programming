#include<bits/stdc++.h>

using namespace std;

int main()
{
    size_t n,m;
    cin>>n>>m;
    size_t mul=n*m;
    long double last=mul/5.00;
    size_t keep=last;
    long double en=last-keep;
    if(en>0.5)
    {
        size_t a=ceil(last);
        cout<<a<<endl;
    }
    else
    {
        cout<<keep<<endl;
    }
    return 0;
}
