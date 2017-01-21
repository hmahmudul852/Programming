#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,ca=1;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            m[s]++;
        }
        map<string,int>::iterator it=m.begin();
        int ma=0;
        string res=it->first;
        while(it != m.end())
        {
            if(ma<it->second)
            {
                ma=it->second;
                res=it->first;
            }
            it++;
        }
        cout<<"Case "<<ca<<": ";
        cout<<res<<endl;
        ca++;
    }
    return 0;
}
