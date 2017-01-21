#include<iostream>

using namespace std;

int main()
{
    int n,a,b,sa=0,sb=0,res=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        sa=sa+a;
        sb=sb+b;
    }
    res=sb-sa;
    cout<<res<<endl;
    return 0;
}
