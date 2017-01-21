#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if((s[0]>='b' && s[0]<='g') && (s[1]>='2' && s[1]<='7'))
        cout<<8<<endl;
    else if(s=="a8" || s=="a1" || s=="h8" || s=="h1")
        cout<<3<<endl;
    else
        cout<<5<<endl;
    return 0;
}
