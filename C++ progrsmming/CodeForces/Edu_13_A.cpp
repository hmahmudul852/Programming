#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,x=1;
    cin>>n>>k;
    int i=1;
    while(x<=n)
    {
        x=i*k;
        i++;
    }
    cout<<x<<endl;
    return 0;
}
