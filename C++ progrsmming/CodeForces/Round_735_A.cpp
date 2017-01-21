#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int g,t,flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
            g=i;
        if(s[i]=='T')
            t=i;
    }
//    cout<<g<<" "<<t<<endl;
    if(g<t)
    {
//        cout<<1<<endl;
        for(int i=g;i<n;i+=k)
        {
            if(s[i]=='T')
            {
                flag=1;
                break;
            }
            else if(s[i]=='#')
                break;
        }
    }
    if(g>t)
    {
//        cout<<0<<endl;
        for(int i=g;i>=0;i-=k)
        {
            if(s[i]=='T')
            {
                flag=1;
                break;
            }
            else if(s[i]=='#')
                break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
