#include<bits/stdc++.h>

using namespace std;

int main()
{
    string st;
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='a')
            cout<<st[i];
        else
        {
            char c=st[i]-1;
            cout<<c<<endl;
        }
//            printf("%c",st[i]-1);
    }
    cout<<endl;
    return 0;
}
