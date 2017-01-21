#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    int cou=0,ma=-1;
    cin>>n>>d;
    string cr;
    while(d--)
    {
        cin>>cr;
        for(int i=0;i<=n;i++)
        {
            if(cr[i]=='0')
            {
                cou++;
                break;
            }
            else if(i==n-1)
            {
                ma=max(ma,cou);
                cou=0;
            }
        }
    }
    ma=max(ma,cou);
    cout<<ma<<endl;
    return 0;
}
