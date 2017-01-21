#include<iostream>

using namespace std;

int main()
{
    string st;
    getline(cin,st);
    int si=st.size(),cou=0;
    for(int i=0;i<si;i++)
    {
        if(st[i]=='4' || st[i]=='7')
            cou++;
    }
    if(cou==4 || cou==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
