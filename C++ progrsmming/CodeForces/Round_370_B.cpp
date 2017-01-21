#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    if(st.length()%2!=0)
        cout<<-1<<endl;
    else
    {
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='L')
                l++;
            else if(st[i]=='R')
                r++;
            else if(st[i]=='U')
                u++;
            else if(st[i]=='D')
                d++;
        }
        int ans=0;
        ans+=abs(l-r);
        ans+=abs(u-d);
        ans=ans/2;
        cout<<ans<<endl;
    }
    return 0;
}
