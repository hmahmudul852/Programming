#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,cou=0;
    cin>>n;
    string st;
    cin>>st;
    for(int i=0;i<n-1;i++)
    {
        if(st[i]==st[i+1])
        {
            cou++;
            if(st[i+1]==st[i+2])
            {
                if(st[i+1]=='r')
                    st[i+1]='b';
                else if(st[i+1]=='b')
                    st[i+1]='r';
            }
            else if(st[i+1]!=st[i+2])
                swap(st[i+1],st[i+2]);
        }
    }
    cout<<cou<<endl;
    return 0;
}
