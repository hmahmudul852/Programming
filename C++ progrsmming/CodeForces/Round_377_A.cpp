#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,r,x;
    cin>>k>>r;
    int i=1;
    while(1)
    {
        x=(i*k)%10;
        if(x==0 || x==r)
            break;
        i++;
    }
    cout<<i<<endl;
}
