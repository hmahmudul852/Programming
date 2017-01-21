#include<iostream>
#include<string>

using namespace std;

int main()
{
    string st;
    getline(cin,st);
    if(st.length()<7)
        cout<<"NO\n";
    else
    {
        int cou=0;
        for(int i=0;i<st.length();i++)
        {
            int flag=1;
            cou=1;
            for(int j=i;j<st.length();j++)
            {
                if(st[j]==st[j+1] && flag==1)
                    cou++;
                else
                    flag=0;
            }
            if(cou>=7)
                break;
            //cout<<cou<<"\n";
        }
        if(cou>=7)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
