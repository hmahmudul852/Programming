#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int flag=1;
    for(int i=0,j=s.length()-1;i<s.length();i++,j--)
        if(s[i]!=t[j])
        {
            flag=0;
            break;
        }
    if(flag==1)
        cout<<"YES\n";
    else if(flag==0)
        cout<<"NO\n";
    return 0;
}
