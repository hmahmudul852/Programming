#include<iostream>
#include<string>

using namespace std;

int main()
{
    string st;
    getline(cin,st);
    int flag=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='H' || st[i]=='Q' || st[i]=='9')
        {
            cout<<"YES";
            break;
        }
        else
        {
            if(i==st.length()-1)
            {
                cout<<"NO";
                break;
            }
        }
    }
    return 0;
}
