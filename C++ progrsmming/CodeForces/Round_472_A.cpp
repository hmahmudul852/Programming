#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
        cout<<9<<" "<<n-9<<endl;
    else if((n/2)%2!=0)
    {
        int a=n/2;
        cout<<a-1<<" "<<a+1<<endl;
    }
    else if((n/2)%2==0)
    {
        int a=n/2;
        cout<<a<<" "<<a<<endl;
    }
    return 0;
}
