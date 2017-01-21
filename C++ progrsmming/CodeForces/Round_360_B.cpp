#include<bits/stdc++.h>

using namespace std;

int main()
{
    string cr,rcr,fcr;
    cin>>cr;
    rcr=cr;
    reverse(rcr.begin(),rcr.end());
    fcr=cr+rcr;
    cout<<fcr<<endl;
    return 0;
}
