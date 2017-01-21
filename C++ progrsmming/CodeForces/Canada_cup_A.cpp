#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(s[j]=='>')
            i++;
        if(s[j]=='<')
            i--;
    }
    if(i<0)
        cout<<abs(i)<<endl;
    else if(i==0)
        cout<<i<<endl;
    else if(i<n)
        cout<<n-i<<endl;
    else
        cout<<i<<endl;
    return 0;
}
