#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,s;
    cin>>a>>b>>s;
    long long keep=s-abs(a)-abs(b);
    if(keep<0)
        cout<<"No"<<endl;
    else if(keep%2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
