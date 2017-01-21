#include<bits/stdc++.h>
#include<cctype>

using namespace std;

int main()
{
    string st,st1;
    getline(cin,st);
    getline(cin,st1);
    for (int i=0; st[i]; i++)
    {
            st[i] = tolower(st[i]);
            st1[i] = tolower(st1[i]);
    }
    for(int i=0;i<st.length();i++)
    {
        if(st[i]!=st1[i])
        {
            int a=st[i],b=st1[i];
            if(a>b)
                cout<<1<<endl;
            if(a<b)
                cout<<-1<<endl;
            break;
        }
        else if(st==st1)
        {
            cout<<0<<endl;
            break;
        }
    }
    return 0;
}
