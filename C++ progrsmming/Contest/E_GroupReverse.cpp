#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    while(cin>>n>>s)
    {
        if(n==0) break;
        int a=s.length()/n;
        for(int i=0;i<s.length();i+=a)
        {
            string ss=s.substr(i,a);
            reverse(ss.begin(),ss.end());
            cout<<ss;
        }
        cout<<endl;
    }
    return 0;
}
