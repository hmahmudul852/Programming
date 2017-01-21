#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int ma=0,temp=1,flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            ma=max(ma,temp);
            temp=1;
        }
        else
            temp++;
    }
    ma=max(ma,temp);
    cout<<ma<<endl;
    return 0;
}
