#include<bits/stdc++.h>

using namespace std;

int main()
{

    string ST="AbdHIMOopqTUVvWwXxY";
    string st;
    cin>>st;
    int flag;
    for(int i=0;i<st.size();i++)
    {
        flag=0;
        if(ST.find(st[i]) != string::npos)
            flag=1;
    }
    if(flag==0)
        cout<<"NIE\n";
    else if(flag==1)
    {
        string keeps=st;
        reverse(keeps.begin(),keeps.end());
        for(int i=0;i<keeps.size();i++)
        {
            if(keeps[i]=='b')
                keeps[i]='d';
            else if(keeps[i]=='d')
                keeps[i]='b';
            else if(keeps[i]=='p')
                keeps[i]='q';
            else if(keeps[i]=='q')
                keeps[i]='p';
        }
        //cout<<keeps<<endl;
        if(st==keeps)
            cout<<"TAK\n";
        else
            cout<<"NIE\n";
    }
    return 0;
}
