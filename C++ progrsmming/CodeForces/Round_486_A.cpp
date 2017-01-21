#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,res;
    cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
    {
        res=pow(-1,n);

        cout<<(n/2+res*n)<<endl;
    }
    return 0;
}
