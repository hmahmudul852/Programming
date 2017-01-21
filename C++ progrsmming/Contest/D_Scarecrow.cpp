#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cr=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                cr++;
                i+=2;
            }
        }
        cout<<"Case "<<++cas<<": "<<cr<<endl;
    }
    return 0;
}
