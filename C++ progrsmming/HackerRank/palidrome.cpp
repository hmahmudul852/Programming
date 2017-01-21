#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int cou,j=s.length()-1;
    string r=s;
    reverse(r.begin(),r.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==r[0])
        {
            cou=i;
//            break;
        }

    }
//    cout<<r[0]<<endl;

    cout<<cou+s.length()<<endl;
}
